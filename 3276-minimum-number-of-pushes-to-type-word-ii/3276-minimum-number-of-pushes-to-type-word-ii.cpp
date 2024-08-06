// Approach -1 : Very very dumb

// class Solution {
// public:
//     int minimumPushes(string word) {
//         unordered_map<char,int> mp;
//         for(char i : word) mp[i]++;

//         if(mp.size()<=8) return word.length();

//         vector<pair<int,char>> arr;
//         for(auto i : mp) arr.push_back({i.second,i.first});
//         sort(arr.begin(),arr.end());
//         reverse(arr.begin(),arr.end());

//         int ans = 0;

//         for(int i=0;i<arr.size();i++){
//             if(i<8) ans+=arr[i].first;
//             else{
//                 ans+=(arr[i].first)*((i/8)+1);
//             }
//         }

//         return ans;
//     }
// };


// Approach - 2 : How come are you such an idiot?

class Solution {
public:
    int minimumPushes(string word) {
        vector<int> arr(26);
        for(char i : word) arr[i-'a']++;

        sort(arr.begin(),arr.end(),greater<int>());

        int ans = 0;

        for(int i=0;i<26;i++){
            ans+=((i/8)+1)*arr[i];
        }

        return ans;
    }
};
