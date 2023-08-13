#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
       int i=1;
    while(i<n){
        int j=i-1;
        int sorting=arr[i];
        while(j>=0){
            if(arr[j]>sorting){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1]=sorting;
        i++;
        
        
    }
    
}