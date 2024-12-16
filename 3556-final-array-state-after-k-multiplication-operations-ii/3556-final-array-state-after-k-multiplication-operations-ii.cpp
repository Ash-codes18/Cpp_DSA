using pi = pair<long,long>;
const int m = 1e9+7;

class comp {
public:
    bool operator()(pi& a, pi& b){
        if (a.first != b.first) return a.first > b.first;
        return a.second > b.second;   
    }
};

class Solution {
private:
    long long binpow(long long a, long long b) {
        a %= m;
        long long res = 1;
        while (b > 0) {
            if (b & 1)
                res = res * a % m;
            a = a * a % m;
            b >>= 1;
        }
        return res;
    }


public:
    vector<int> getFinalState(vector<int>& nums, int k, int x){
        if(x==1) return nums;

        int n = nums.size();
        
        priority_queue<pi,vector<pi>,comp> pq;
        int mx = INT_MIN;

        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
            mx=max(mx,nums[i]);
        }

        while(x*pq.top().first <= mx && k--){
            auto[ele,ind] = pq.top();
            pq.pop();
            ele*=x;
            pq.push({ele,ind});
        }

        int nk = k/n;
        int r = k%n;

        vector<int> res(n);

        long long a = binpow(x, nk);
        long long b = binpow(x, nk + 1);

        while(!pq.empty()){
            auto[ele,ind] = pq.top();
            pq.pop();
            long long val = (r-- > 0) ? b : a;
            val *= ele;
            res[ind] = val % m;
        }

        return res;
    }
};