#include <iostream>
using namespace std;


string revstring(string s, int start, int end){

    if(start>=end){
        return s;
    }

    swap(s[start],s[end]);

    return revstring(s,start+1,end-1);

}


int main(){

    string s;
    cout<<"Enter a word : ";
    cin>>s;

    int n=s.length();
    string rev=revstring(s,0,n-1);

    if(s==rev){
        cout<<"Palindrome"<<endl;
    }

    else{
        cout<<"Npt a Palindrome"<<endl;
    }


    return 0;
}   