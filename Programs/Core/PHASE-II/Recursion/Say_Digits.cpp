#include <iostream>
using namespace std;


void saydigits(int n){
    
    string names[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};


    if(n==0){
       return ;
    }


    saydigits(n/10);
    cout<<names[n%10]<<" ";

}


int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;

    saydigits(n);

    return 0;
} 