// class Solution {
// public:

//    string common(string a, string b){
//         string common="";
//         int n=a.size();
//         for(int i=0;i<n;i++){
//             if(a[i]==b[i]){
//                 common+=a[i];
//             }
//             else{
//                 break;
//             }
//         }
//         return common;
//     }

//     string longestCommonPrefix(vector<string>& strs) {
       
//         if(strs.size()==1){
//             return strs[0];
//         }

//         string comm;
//         int n=strs.size();
//         for(int i=0;i<n-1;i++){
//             if(i==0){
//                 comm=common(strs[i],strs[i+1]);
//             }
//             else{

//             comm=common(comm,strs[i+1]);
//             }
//         }
    
//         return comm;
//     }
// };


class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
       
        int n = arr.size();
        string ans = arr[0];

        for(int i=1;i<n;i++){
            string temp;
            for(int j=0;j<arr[i].length() && j<ans.length();j++){
                if(arr[i][j]!=ans[j]) break;
                temp.push_back(ans[j]);
            }
            ans = temp;
        }

return ans;

    }
};