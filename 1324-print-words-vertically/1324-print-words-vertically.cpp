class Solution {
public:
    vector<string> printVertically(string s) {
        int n=s.length();
        vector<string> words;
        string temp="";
        int longest=0; 
        int count=0;

        for(int i=0;i<n;i++){
            if(s[i]==' '){
                words.push_back(temp);
                temp="";
                longest=max(longest,count);
                count=0;
            }
            else{
                temp.push_back(s[i]);
                count++;
            }
        }

        if(!temp.empty()){
            words.push_back(temp);
        }
        
        longest=max(longest,count);


        int m=words.size();
        vector<string> ans(longest,"");

        for(int i=0;i<m;i++){
            for(int j=0;j<longest;j++){
                if(j>=words[i].length()){
                    ans[j].push_back(' ');
                }
                else{
                    ans[j].push_back(words[i][j]);
                }
            }
        }

        for(int i=0;i<ans.size();i++){
            for(int j=ans[i].length()-1;j>=0;j--){
                if(ans[i][j]==' '){
                    ans[i].pop_back();
                }
                else{
                    break;
                }
            }
        }




    return ans;


    }
};