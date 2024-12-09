class Solution {
public:
    string compressedString(string &w) {
        int n = w.length();
        string ans;
        int count = 0;

        ios::sync_with_stdio(0);
        cin.tie(0);

        
        for(int i=0;i<n;i++){
            if(count==9){
                ans += to_string(count);
                ans.push_back(w[i-1]);
                count = 0;
            }
            if(i+1<n && w[i]==w[i+1]){
                count++;
            }
            else{
                ans += to_string(count+1);
                ans.push_back(w[i]);
                count = 0;
            }   
        }

        return ans;
    }
};