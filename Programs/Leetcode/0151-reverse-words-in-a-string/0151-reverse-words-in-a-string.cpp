class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        int f=0;

        vector<string> words;
        string temp;

        for(int i=0;i<n;i++){
            if(s[i]==' ' && !temp.empty()){
                words.push_back(temp);
                temp.clear();
            }
            else if(s[i]!=' '){
                temp.push_back(s[i]);
            }
        }

        if(!temp.empty()){
            words.push_back(temp);
        }
        

        int e=words.size()-1;


        while(f<=e){
            swap(words[f++],words[e--]);
        }


        string ans;

        for(int i =0;i<words.size()-1;i++){
            ans+=words[i];
            ans+=" ";
        }
        
        if(!words.empty()){
            ans+=words[words.size()-1];
        }

return ans;

    }
};