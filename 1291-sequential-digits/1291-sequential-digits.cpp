class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;

        for (int i=1;i<9;i++){
            int num=i;
            cout<<i<<"th pass: ";
            for(int j=i+1;j<=9;j++){
                num=(num*10)+j;
                // cout<<num<<" ";
                if(num>high){
                    break;
                }
                else if(num>=low){
                    ans.push_back(num);
                }
            }
            cout<<endl<<endl;
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};
