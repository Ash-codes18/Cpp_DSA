class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n=details.size();
        int count=0;

        for(int i=0;i<n;i++){
            string val;
            val.push_back(details[i][11]);
            val.push_back(details[i][12]);

            if(stoi(val)>60){
                count++;
            }
            
        }

return count;
    }
};