class Solution {
public:
    vector<int> countBits(int n) {
    
        vector<int> ans;
        int count=0;

        for(int i=0;i<=n;i++){
            int x=i;
            while(x>0){
                if(x%2==1){
                    count++;
                }
                x=x/2;
            }
            ans.push_back(count);
            count=0;
        }

        return ans;
    }
};