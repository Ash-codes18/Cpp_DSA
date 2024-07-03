class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int n = player1.size();
        int sum1=0,sum2=0;


        for(int i=0;i<n;i++){
            if((i-1>=0 && player1[i-1]==10) || (i-2>=0 && player1[i-2]==10)){
                sum1+=(player1[i]*2);
            }
            else{
                sum1+=player1[i];
            }
            if((i-1>=0 && player2[i-1]==10) || (i-2>=0 && player2[i-2]==10)){
                sum2+=(player2[i]*2);
            }
            else{
                sum2+=player2[i];
            }
        }

        return (sum1==sum2)? 0 : (sum1>sum2)? 1 : 2;


    }
};