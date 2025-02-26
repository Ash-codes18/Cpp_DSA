class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<int> pq;
        unordered_map<char,int> mp;

        for(char &i : tasks) mp[i]++;
        for(auto &i : mp) pq.push(i.second);

        int ans = 0;

        while(!pq.empty()){
            int x = n+1;
            vector<int> arr;
            while(x && !pq.empty()){
                int freq = pq.top();
                pq.pop();
                ans++;
                freq--;
                if(freq>0) arr.push_back(freq);
                x--; 
            }
            for(int &i : arr) pq.push(i); 
            if(!pq.empty()) ans+=x; 
        }
        

        return ans;
    }
};


// agar mere distinct jo h wo n se jaada h to top wale n uthalo
// warna saare lelo aur fir jb tk gap = n tk tb idle rkh do
// fir doobara utha lo top wala