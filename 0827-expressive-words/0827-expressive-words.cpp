class Solution {

private:

    vector<string> helper(string s){
        vector<string> lumps;
        string temp;
        int n = s.length();
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]) temp.push_back(s[i-1]);
            else{
                temp.push_back(s[i-1]);
                lumps.push_back(temp);
                temp = "";
            }
        }
        if(s[n-1]==temp[0] || temp.empty()){
            temp.push_back(s[n-1]);
            lumps.push_back(temp);
        }   
        else{
            lumps.push_back(temp);
            temp = s[n-1];
            lumps.push_back(temp);
        }
        return lumps;
    }


public:
    int expressiveWords(string s, vector<string>& words) {
        vector<string> lump = helper(s);

        int ans = 0;

        for(int i=0;i<words.size();i++){
            vector<string> curr = helper(words[i]);
            bool flag = true;
            if(lump.size()!=curr.size()) continue;
            for(int j=0;j<curr.size();j++){
                if(curr[j][0]==lump[j][0]){
                    if(curr[j].length()>lump[j].length()){
                        flag = false;
                        break;
                    }
                    
                    else if(curr[j].length()<lump[j].length()){
                        if(lump[j].length()<3){
                            flag = false;
                            break;
                        }
                    }

                }
                else{
                    flag = false;
                    break;
                }
            }        

            if(flag) ans++;
        }


        return ans;
    }
};