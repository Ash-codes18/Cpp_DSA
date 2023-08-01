#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   

    // Write your code here.
   for(int i=0;i<n;i++){
   int min_index=i;
       for(int j=i+1;j<n;j++){
           if(arr[min_index]>arr[j]){
               min_index=j;
           }
       }
       swap(arr[min_index],arr[i]);
   } 

}