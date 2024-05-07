// Approach-1 -> O(n^2)



/*
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

*/


// Approach-2 -> O(n)


class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        int n = tickets.size();
        int count=0;
        int val = tickets[k];


        for(int i=0;i<n;i++){
            if(i<k && tickets[i]>=val){
                count+=val;
            }
            else if(i>k && tickets[i]>=val){
                count+=val-1;
            }
            else if(tickets[i]<val){
                count+=tickets[i];
            }
        }
        


    return count+val;

    }
};
