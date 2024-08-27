// class Solution {
// public:
//     string frequencySort(string s) {
//         vector<pair<int,char>> mp;
//         int n=s.length();
//         int arr[128] = {0};
//         sort(s.begin(),s.end());

//         for(int i=0;i<n;i++){
//             arr[int(s[i])]++;
//         }

//     for(int i = 0; i < 128; i++) {
//         if(arr[i] > 0) {
//             mp.push_back({arr[i],char(i)});
//         }
//     }

//     sort(mp.begin(),mp.end());
//     reverse(mp.begin(),mp.end());

//     string ans="";
    
//         for(auto i:mp){
//             for(int j=0;j<i.first;j++){
//                 ans.push_back(i.second);
//             }
//         }

// return ans;
//     }
// };


class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>> v;
        unordered_map<char,int> mp;
        
        for(char i : s) mp[i]++;

        for(auto i : mp){
            v.push_back({i.second,i.first});
        }

        sort(v.rbegin(),v.rend());

        string ans = "";
        for(auto i : v){
            for(int j=0;j<i.first;j++){
                ans.push_back(i.second);
            }
        }

        return ans;
    }
};