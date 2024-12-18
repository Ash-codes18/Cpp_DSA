class Solution {
private:
    int helper(unordered_map<int,int> &mp, int x){
        if(x==1) return 0;

        if(mp.count(x)) return mp[x];

        int res;

        if(x%2==0) res = 1+helper(mp,x/2);
        else res = 1+helper(mp,x*3+1);

        mp[x] = res; 
        return res;
    }


public:
    int getKth(int lo, int hi, int k) {
        unordered_map<int,int> mp;
        vector<pair<int,int>> vp;

        for(int i=lo;i<=hi;i++){
            mp[i] = helper(mp,i);
            vp.push_back({mp[i],i});
        }

        sort(vp.begin(),vp.end());

        return vp[k-1].second;
    }
};