class Solution{
    public:
    int min_operations(int n, vector<int>&arr, vector<int>&brr) {
     // code here
int i;
int cnt=0;
int j=0;
while(j<n){
    if(arr[j]==brr[j]){
    cnt++;
    j++;
    }
    else{
while(arr[j]!=brr[j]){
    int temp=arr[j];
   for(i=j+1;i<n;i++){
       arr[i-1]=arr[i];
   }
   arr[n-1]=temp;
   cnt++;
   if(arr[j]==brr[j]){
       cnt++;
       j++;
}
}
}
}
return cnt;
    }
};