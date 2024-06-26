// class Solution {
// public:
//     bool validMountainArray(vector<int>& arr) {
//         int n = arr.size();

//         if(n<3){
//             return false;
//         }

//         int m = 0;
//         int mv = INT_MIN;

//         for(int i=0;i<n;i++){
//             if(mv<arr[i]){
//                 m=i;
//                 mv=arr[i];
//             }
//         }

//         if(m==0 || m==n-1){
//             return false;
//         }


//         for(int i=0;i+1<=m;i++){
//             if(arr[i]>=arr[i+1]){
//                 return false;
//             }
//         }

//         for(int i=m;i+1<n;i++){
//             if(arr[i]<=arr[i+1]){
//                 return false;
//             }
//         }


// return true;


//     }
// };



// A better Approach


class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n<3) return false;
        int i = 0, j = n-1;

        while(i+1<n && arr[i+1]>arr[i]) i++;
        while(j-1>=0 && arr[j-1]>arr[j]) j--;
        

return j!=n-1 && i!=0 && i==j;

    }
};

