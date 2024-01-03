class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
       

        if(s.length()==2){
            if(s[0]==s[1]){
                return 0;
            }
            else{
                return -1;
            }
        }



        int a[26]={0};
        for(char i:s){
            a[i-'a']++;
        }

        vector<char> valid;


        bool flag=0;
        for(int i=0;i<26;i++){
            if(a[i]>=2){
                valid.push_back(i+'a');
                flag=1;
            }
        }


        if(!flag){
            return -1;
        }


        int max=0;

        for(char i:valid){
            int firstind,lastind;
            for(int j=0;j<s.length();j++){
                if(i==s[j]){
                    firstind=j;
                    break;
                }
            }

            for(int k=s.length()-1;k>=0;k--){
                if(i==s[k]){
                    lastind=k;
                    break;
                }
            }

            cout<<firstind<<endl<<lastind<<endl;
            if(max<lastind-firstind){
                max=lastind-firstind-1;
            }

        }


    return max;


    }
};