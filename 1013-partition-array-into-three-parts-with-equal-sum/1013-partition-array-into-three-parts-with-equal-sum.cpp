class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;

        for(int i : arr){
            sum+=i;
        }

        if(sum%3!=0){
            return false;
        }

        sum/=3;
        int count = 0;
        int tsum =0;

        for(int i=0;i<n;i++){
            tsum+=arr[i];
            if(tsum==sum){
                count++;
                tsum=0;
            }
        }

        return count>=3; 

    }
};