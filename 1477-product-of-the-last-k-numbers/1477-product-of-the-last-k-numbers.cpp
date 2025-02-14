// class ProductOfNumbers {
// vector<int> arr;
// public:    
//     void add(int num) {
//         arr.push_back(num);
//     }
    
//     int getProduct(int k) {
//         int ans = 1;
//         int n = arr.size();
//         for(int i=n-1;i>=n-k;i--){
//             ans*=arr[i];
//         }
//         return ans;
//     }
// };


class ProductOfNumbers {
private:
    vector<int> arr;
public:    
    void add(int num) {
        if(num==0){
            arr.clear();
            return;
        }
        int n = arr.size();
        if(n==0) arr.push_back(num);
        else arr.push_back(num*arr[n-1]);
    }
    
    int getProduct(int k) {
        int n = arr.size();
        if(k>n) return 0;
        return (n-k-1)<0 ? arr[n-1] : arr[n-1]/arr[n-k-1];
    }
};