#include <iostream>
using namespace std;

int getlength(char c[]){
    int count=0;
    while(c[count]!='\0'){
        count++;
    }
    return count;
}

void reverse(char c[],int n){
    int i=0;
    while(i<n/2){
        swap(c[i],c[n-1]);
        i++;
    }
}

int main(){

    char arr[20];
    cin>>arr;
    int length=getlength(arr);
 
    cout<<"string before reversing : "<<arr<<endl;
    cout<<"Length of string = "<<length;
    reverse(arr,length);
    cout<<endl<<"string after reversing : "<<arr;

    return 0;
}