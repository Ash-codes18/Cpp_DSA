class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
       
        ios::sync_with_stdio(0);
        cin.tie(0);
       
        int n = customers.size();
        int sum = customers[0][0];
        double delay = 0;


        for(int i=0;i<n;i++){
            if(customers[i][0]>sum){
                sum=customers[i][0]+customers[i][1];
            }
            else{
                sum+=customers[i][1];
            }
            delay+=(sum-customers[i][0]);  
        }
    
    return  delay/n;

    }
};