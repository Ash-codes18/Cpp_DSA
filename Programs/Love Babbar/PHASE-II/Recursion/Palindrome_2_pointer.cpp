#include <iostream>
using namespace std;

bool IsPalindrome(string s,int start,int end){
    if(start>=end){
        return true;
    }

    if(s[start]!=s[end]){
        return false;
    }

    return IsPalindrome(s,start+1,end-1);


}

int main(){

    string s;
    cout<<"Enter a word : ";
    cin>>s;

    int n=s.length();

    IsPalindrome(s,0,n-1)?cout<<"Palindrome":cout<<"Not a Palindrome";


    return 0;
}   