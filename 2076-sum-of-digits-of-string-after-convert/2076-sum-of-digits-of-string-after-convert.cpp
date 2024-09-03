class Solution {
private:
    int getnum(int n){
        int ans = 0;
        while(n>0){
            ans+=n%10;
            n/=10;
        }
        return ans;
    }


public:
    int getLucky(string s, int k) {
        string str = "";
        for(char &i : s){
            str+=to_string(i-'a'+1);
        }

        int sum = 0;
        
        for(char&i : str){
            sum+=(i-'0');
        }

        k--;

        while(k--){
            sum = getnum(sum);
        }

        return sum;
    }
};