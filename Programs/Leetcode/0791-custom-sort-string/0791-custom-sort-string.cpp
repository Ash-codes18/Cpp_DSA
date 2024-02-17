class Solution {
public:
    string customSortString(string order, string s) {
        int arr[26]={0};
        int n=s.length();
        int m=order.length();

        for(int i=0;i<n;i++){
            arr[s[i]-'a']++;
        }


        string ans="";

        for(int i=0;i<m;i++){
            int val=arr[order[i]-'a'];
            for(int j=0;j<val;j++){
                ans.push_back(order[i]);
            }
            arr[order[i]-'a']=0;
        }


        for(int i=0;i<26;i++){
            int val=arr[i];
            for(int j=0;j<val;j++){
                ans.push_back(char(i+'a'));
            }
        }

return ans;
    }
};