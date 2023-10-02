#include <iostream>
using namespace std;

int main(){

    char arr[20];
    cin>>arr;
    int count=0;
    while(arr[count]!='\0'){
        count++;
    }
    cout<<"Length of string = "<<count;

    return 0;
}