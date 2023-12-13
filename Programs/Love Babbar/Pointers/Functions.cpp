#include <iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}

void inc(int *p){
    (*p)++;
}

void update(int *p){
    *p = 55;
}

void mul(int *arr){
    for(int i=0;i<5;i++){
        *(arr+i)=*(arr+i)*2;
    }
}

           // or

void multi(int arr[]){
    for(int i=0;i<5;i++){
        arr[i]*=2;
    }
}


int main(){

    int val=12;
    int *ptr=&val;

    print(ptr);
    cout<<"Before inc func : "<<val<<endl;
    inc(ptr);
    cout<<"After inc func : "<<val<<endl;
    update(ptr);
    cout<<"After update func : "<<val<<endl;

    int arr[5]={21,23,5,42,4};

    cout<<"Value of arr before calling func : ";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;


    mul(arr);
    cout<<"Value of arr after calling func : ";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    multi(arr);
    cout<<"Value of arr after calling another func : ";
    for(int i:arr){
        cout<<i<<" ";
    }

    


    return 0;
}