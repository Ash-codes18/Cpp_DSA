#include <bits/stdc++.h> 
string reverseString(string str)
{
	// Write your code here
	int start=0;
	int end=str.length()-1;

	while(start<=end){
		swap(str[start],str[end]);
		start++;
		end--;
	}
	
	return str;
}