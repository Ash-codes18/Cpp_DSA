class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        int n = tickets.size();
        int count=0;

    while(1){
        if(tickets[k]==0){
            break;
        }

       for(int i=0;i<n;i++){
            if(tickets[i]>0){
                tickets[i]--;
                count++;
        }

        if(tickets[k]==0){
            break;
            }
        }
}

return count;


    }
};