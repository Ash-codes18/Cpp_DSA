class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        ios_base::sync_with_stdio(0);
        cin.tie(0); 
        
        int n = gas.size();

        for(int i=0;i<n;i++){
            int left = 0;
            if((gas[i]+left)-cost[i]>=0){
                left = gas[i]-cost[i];
                int j = i+1;
               while((gas[j%n]+left)-cost[j%n]>=0){
                    if(j%n==i) return i;
                    left += gas[j%n]-cost[j%n];
                    j++;
                }
                i=j-1;
            }
        }

return -1;

    }
};