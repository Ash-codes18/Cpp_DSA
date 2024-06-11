// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         int n=strs.size();
//         vector<vector<int>> vals;

//         for(int i=0;i<n;i++){
//             vector<int> temp(26,0);
//             for(int j=0;j<strs[i].length();j++){
//                 temp[strs[i][j]-'a']++;
//             }
//             vals.push_back(temp);
//         }

//         vector<vector<string>> ans;
//         vector<int> eq;

//         // for(int i=0;i<vals.size()

// for(int i=0;i<n;i++){
//     for(int j:vals[i]){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }


// return ans;
//     }
// };


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>> ans;

        map<string,vector<string>> mp;


        for(string i : strs){
            string word = i;
            sort(word.begin(),word.end());
            mp[word].push_back(i);
        }


        for(auto i : mp){
            ans.push_back(i.second);
        }

        return ans;

    }
};