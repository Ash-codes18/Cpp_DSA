class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> arr;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                if(n/i==i) arr.push_back(i);
                else{
                    arr.push_back(i);
                    arr.push_back(n/i);
                }
            }
        }

        for(int i:arr){
            cout<<i<<" ";
        }
        if(arr.size()<k) return -1;
        sort(arr.begin(),arr.end());
        return arr[k-1];
    }
};