class Solution {
public:
    int numDecodings(string s) {
        
        if(s.empty() || s[0]=='0'){
            return 0;
        }
        
        int n=s.length();
        vector<int> way(n+1,0);

        way[0]=1;
        way[1]=1;


        for (int i = 2; i <= n; ++i) {
            int oneDigit = s[i - 1] - '0';
            int twoDigits = stoi(s.substr(i - 2, 2));

            if (oneDigit != 0) {
                way[i] += way[i - 1];
            }

            if (10 <= twoDigits && twoDigits <= 26) {
                way[i] += way[i - 2];
            }
        }

        return way[n];
    }
};