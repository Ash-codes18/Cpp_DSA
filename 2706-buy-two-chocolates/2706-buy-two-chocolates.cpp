class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n=prices.size();
        sort(prices.begin(),prices.end());

        if(prices[0]+prices[1]>money){
            return money;
        }

        int min=INT_MAX;

        for(int i=0;i<n-1;i++){
            if(prices[i]+prices[i+1]<min){
                min=prices[i]+prices[i+1];
            }
        }

        if(min>money){
            return money;
        }

        else{
            return money-min;
        }


    }
};