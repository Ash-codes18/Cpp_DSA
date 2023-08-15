#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	int n=arr.size()-1;
	while(m<n){
		swap(arr[n],arr[m+1]);
		m++;
		n--;
	}
}
