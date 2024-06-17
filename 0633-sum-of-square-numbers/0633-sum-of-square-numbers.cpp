class Solution {

private:

    void getsquares(int n, vector<long long> &arr){
        for(long long i =0;i*i<=n;i++){
            arr.push_back(i*i);
        }
    }


public:
    bool judgeSquareSum(int c) {

        vector<long long> arr;
        getsquares(c,arr);

        int s = 0;
        int e = arr.size()-1;

        while(s<=e){

            if(arr[s]+arr[e]==c){
                return true;
            }
            else if(arr[s]+arr[e]<c){
                s++;
            }
            else{
                e--;
            }

        }


return false;

    }
};