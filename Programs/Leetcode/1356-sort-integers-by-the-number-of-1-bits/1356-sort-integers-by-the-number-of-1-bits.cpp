class Solution {

private:

    int getSetBits(int a){
        int count = 0;
        while(a>0){
            if(a%2==1){
                count++;
            }
            a/=2;
        }
        return count;
    }


public:
    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();


        for(int i =0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                if(getSetBits(arr[j])>getSetBits(arr[j+1])){
                    swap(arr[j],arr[j+1]);
                }
                else if(getSetBits(arr[j])==getSetBits(arr[j+1])){
                    if(arr[j]>arr[j+1]){
                        swap(arr[j],arr[j+1]);
                    }
                }
            }
        }


        return arr;


    }
};