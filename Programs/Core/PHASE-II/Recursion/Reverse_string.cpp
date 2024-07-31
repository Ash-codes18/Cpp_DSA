#include <iostream>
using namespace std;


void revstring(string &s, int start, int end){

    if(start>=end){
        return ;
    }

    swap(s[start],s[end]);

    revstring(s,start+1,end-1);

}


int main(){

    string s;
    cout<<"Enter a word : ";
    cin>>s;

    int n=s.length();

    cout<<"Before : "<<s<<endl;
    revstring(s,0,n-1);
    cout<<"After : "<<s<<endl;

    return 0;
}   