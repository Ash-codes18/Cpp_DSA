//Fails 1 test case

// int findDuplicate(vector<int> &arr) 
// {   
//     int n=arr.size();
//     int duplicate=0;

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//               if (arr[i] == arr[j]) {
//                 duplicate = arr[i];
//                 break;
//             }
//         }
//     }
//     return duplicate;
	
// }


//Pases all test cases

int findDuplicate(vector<int> &arr) {
    int n = arr.size();
    int ans = 0;

    for (int i = 0; i < n   ; i++) {
       ans=ans^arr[i];
    }
    for (int i = 1; i < n   ; i++) {
       ans=ans^i;
    }
    return ans;
}
