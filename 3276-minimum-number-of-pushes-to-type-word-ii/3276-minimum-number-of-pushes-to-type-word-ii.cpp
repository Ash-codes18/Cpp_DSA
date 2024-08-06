class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> mp;
        for(char i : word) mp[i]++;

        if(mp.size()<=8) return word.length();

        vector<pair<int,char>> arr;
        for(auto i : mp) arr.push_back({i.second,i.first});
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());

        // for(auto i : arr) cout<<i.second<<" : "<<i.first<<endl;

        int ans = 0;

        for(int i=0;i<arr.size();i++){
            if(i<8) ans+=arr[i].first;
            else{
                ans+=(arr[i].first)*((i/8)+1);
            }
            cout<<ans<<endl;
        }

        return ans;
    }
};