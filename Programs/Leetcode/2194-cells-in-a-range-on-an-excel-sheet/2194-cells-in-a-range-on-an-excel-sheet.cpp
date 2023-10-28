class Solution {
public:
    vector<string> cellsInRange(string s) {
        
        vector<char> alphabets;
        vector<string> ans;
        
        char first_col=s[0];
        char last_col=s[3];
        int first_row=int(s[1]-'0');
        int last_row=int(s[4]-'0');

        int num_of_cols=last_col-first_col+1;
        string value;
        int first_col_index;

        for(int i=0;i<num_of_cols;i++){
            for(int j=first_row;j<=last_row;j++){
                value+=first_col+i;
                value+=char(j+'0');
                ans.push_back(value);
                value.clear();
            }
        }        

return ans;

    }
};