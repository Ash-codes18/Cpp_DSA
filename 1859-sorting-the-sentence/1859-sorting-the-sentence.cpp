class Solution {
public:
    string sortSentence(string s) {
        int n=s.length();
        int count=1;

        for(int i=0;i<n;i++){
            if(s[i]==' '){
                count++;
            }
        }

        if(count==1){
            s.pop_back();
            return s;
        }

        vector<string> pos(count,"");
        string temp;

        for(int i=0;i<n;i++){
            if(s[i]==' '){
                temp.pop_back();
                temp.push_back(' ');
                pos[s[i-1]-'0'-1]=temp;
                temp.clear();
            }
            else{
                temp.push_back(s[i]);
            }
        }

        if (!temp.empty()) {
            int val=temp[temp.length()-1]-'0';
            temp.pop_back();
            temp.push_back(' ');
            pos[val-1]=temp;
        }
        

        string ans;
        for(string i:pos){
            if (!i.empty()) {
                ans += i;
            }
        }

    ans.pop_back();
    return ans;

    }
};