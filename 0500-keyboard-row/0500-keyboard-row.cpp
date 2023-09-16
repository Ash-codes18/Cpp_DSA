class Solution {
public:

bool checkr1(string a){
    string row1="QWERTYUIOPqwertyuiop";
    for(int i=0;i<a.length();i++){
        bool flag=0;
        for(int j=0;j<row1.length();j++){
            if(a[i]==row1[j]){
                flag=1;
                break;
            }
        }
        if(!flag){
            return 0;
        }
    }
return 1;

}

bool checkr2(string a){
   string row2="asdfghjklASDFGHJKL";
 for(int i=0;i<a.length();i++){
        bool flag=0;
        for(int j=0;j<row2.length();j++){
            if(a[i]==row2[j]){
                flag=1;
                break;
            }
        }
        if(!flag){
            return 0;
        }
    }
return 1;
    
}

bool checkr3(string a){
    string row3="ZXCVBNMzxcvbnm";
    
     for(int i=0;i<a.length();i++){
        bool flag=0;
        for(int j=0;j<row3.length();j++){
            if(a[i]==row3[j]){
                flag=1;
                break;
            }
        }
        if(!flag){
            return 0;
        }
    }
return 1;
}

    vector<string> findWords(vector<string>& words) {
    
    vector<string> ans;

    int n=words.size();
    for(int i=0;i<n;i++){
        if(checkr1(words[i])==1 || checkr2(words[i])==1 || checkr3(words[i])==1){
            ans.push_back(words[i]);
        }
    }
return ans;
    }
};