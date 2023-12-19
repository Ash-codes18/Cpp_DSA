#include <bits/stdc++.h> 

bool IsPalindrome(string s,int start,int end){
    if(start>=end){
        return true;
    }

    if(s[start]!=s[end]){
        return false;
    }

    return IsPalindrome(s,start+1,end-1);

}


bool checkPalindrome(long long N)
{
	// Write your code here.

    string s;

    while(N>0){
        if(N%2==0){
            s.push_back(0);
        }
        else{
            s.push_back(1);
        }
        N/=2;
    }


    bool ans=IsPalindrome(s,0,s.length()-1);
    return ans;
}