#include <iostream>
using namespace std;

int main(){

    string s,part;
    cin>>s;
    cin>>part;


    int n,m;
    n=s.length();
    m=part.length();

    while(s.length()!=0 && s.find(part)<s.length()){
         s.erase(s.find(part),part.length());
    }

    cout<<s;

    return 0;
}