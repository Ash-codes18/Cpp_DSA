#include <iostream>
using namespace std;


void revstring(string &s, int start){

    int size=s.length();
    int end=size-start-1;

    if(start>=end){
        return ;
    }

    swap(s[start],s[end]);

    revstring(s,start+1);

}


int main(){

    string s;
    cout<<"Enter a word : ";
    cin>>s;

    int n=s.length();

    cout<<"Before : "<<s<<endl;
    revstring(s,0);
    cout<<"After : "<<s<<endl;

    return 0;
}   