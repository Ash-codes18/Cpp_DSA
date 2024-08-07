class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;

        for(int &i : bills){
            if(i==20){
                if(ten>0 && five>0){
                    ten--;
                    five--;
                }
                else if(five>2){
                    five-=3;
                }
                else return false;
            }
            else if(i==10){
                ten++;
                if(five>0) five--;
                else return false;
            }
            else five++;
        }

        return true;
    }
};