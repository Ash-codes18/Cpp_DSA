class Solution {
public:
    string removeDigit(string number, char digit) {
        
        ios::sync_with_stdio(0);
        cin.tie(0);

       
        int n = number.length();

        string ans = "";

        for(int i=n-1;i>=0;i--){
            string temp = number;
            if(number[i]==digit){
                temp.erase(temp.begin()+i);
                if(ans=="") ans = temp;
                else ans = max(ans,temp);  
            } 
        }        

        return ans;

    }
};