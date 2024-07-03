class Solution {
public:
    string sortSentence(string s) {
        int n=s.length();
        
        string temp,ans="";
        vector<string> arr(9);

        for(int i=0;i<n;i++){
            if(s[i]==' '){
                int ind = temp[temp.length()-1]-'0';
                temp.pop_back();
                arr[ind-1] = temp;
                temp="";
            }
            else if(i==n-1){
                int ind = s[i]-'0';
                arr[ind-1] = temp;
            }
            else{
                temp.push_back(s[i]);
            }
        }

        for(string i : arr){
            if(!i.empty()){
                ans+=i;
                ans+=" ";
            }
        }

        ans.pop_back();
        return ans;

    }
};

