class Solution {
public:
    string thousandSeparator(int n) {
        string a=to_string(n);
        if(a.length()<4){
            return a;
        }

        string ans;
        int count=0;

        for(int i=a.length()-1;i>=0;i--){
            if(count%3==0 && count!=0){
                ans+='.';
            }
            ans+=a[i];
            count++;
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};