// Approach-1 : Linear time and space

// class Solution {
// public:
//     int findTheWinner(int n, int k) {
        
//         ios_base::sync_with_stdio(0);
//         cin.tie(0);


//         vector<int> arr(n);
//         for(int i=0;i<n;i++){
//             arr[i]=i+1;
//         }


//         int i = 0;
//         while(1<n){
//             i+=(k-1);
//             i%=n;
//             arr.erase(arr.begin()+i);
//             n-=1;
//         }

//         return arr[0];
//     }
// };


// Approach-2 : Linear time & Constant Space


class Solution {
public:

    int findTheWinner(int n, int k, int ans = 0) {
        for(int i=1; i<=n; i++) ans = (ans + k) % i;
        return ans+1;
    }   
};