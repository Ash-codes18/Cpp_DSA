class Solution {
public:
    bool checkZeroOnes(string s) {
        
        int n=s.length();

        if(n==1){
            if(s=="1"){
                return true;
            }
            else{
                return false;
            }
        }

        
        int one=0;
        int temp0=0;

        int zero=0;
        int temp1=0;

        for(int i=0;i<n-1;i++){
            if(s[i]=='0'){
                temp0++;
            }
            if(s[i+1]=='1'){
                zero=max(zero,temp0);
                temp0=0;
            }
        }
        if(s[n-1]=='0'){
            temp0++;
        }
        zero=max(temp0,zero);

        cout<<"zero  = "<<zero<<endl;

        for(int i=0;i<n-1;i++){
            if(s[i]=='1'){
                temp1++;
            }
            if(s[i+1]=='0'){
                one=max(one,temp1);
                temp1=0;
            }
        }
        if(s[n-1]=='1'){
            temp1++;
        }
        one=max(one,temp1);

        cout<<"one  = "<<one<<endl;

if(one>zero){
    return true;
}

return false;

    }
};