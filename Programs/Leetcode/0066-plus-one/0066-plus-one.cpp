class Solution {
public:
     vector<int> plusOne(vector<int>& digits) {

        int n=digits.size();
        int carry=1;

        for(int i=n-1;i>=0;i--){

            if(i==0 && digits[i]==9){
                digits.insert(digits.begin(),1);
                digits[i+1]=0;
            }

                else if(digits[i]==9){
                     digits[i]=0;
                }
                else{
                     digits[i]+=1;
                     break;
                }
        }
        return digits;
    }
};