class Solution {

long long MOD = 1000000007;

private:
    int sum(vector<int> arr, int k){
        if(k==0){
            return arr[arr.size()-1 % MOD];
        }
    

        for(int i=1;i<arr.size();i++){
            arr[i]=(arr[i-1]+arr[i]) % MOD;
        }

        return sum(arr,k-1);


    }

public:
    int valueAfterKSeconds(int n, int k) {
        vector<int> arr(n,1);

        return sum(arr,k)%MOD;

    }
};