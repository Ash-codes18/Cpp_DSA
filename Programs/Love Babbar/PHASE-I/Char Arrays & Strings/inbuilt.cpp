#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char a[]= "This seems like halua";
    char b[]="This is not halua";
    char c[100];

    cout<<strlen(a)<<endl;
    cout<<strcmp(a,b)<<endl;
    strcpy(c,b);
    cout<<"Copying string"<<c<<endl;
    cout<<strcmp(c,b)<<endl;

    return 0;
}