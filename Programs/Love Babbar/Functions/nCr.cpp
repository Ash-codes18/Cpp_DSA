#include <iostream>
using namespace std;

int factorial(int a){

    int fact=1;

    for (int i = 1; i <=a; i++)
    {   
        fact*=i;
    }
    
    return fact;
}


int ncr(int a, int b){
    int answer=(factorial(a))/(factorial(b)*factorial(a-b));
    return answer;
}


int main(){

    int a,b;
    cout<<"Enter the numbers you want to perform nCr (combination) on : ";
    cin>>a>>b;

    int ans=ncr(a,b);
    cout<<"nCr = "<<ans;

    return 0;
}