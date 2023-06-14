#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no. of rows in the pattern : ";
    cin>>n;

    
    int i=0;

    while(i<n){

    int c=n;
        int j=0;
            
        while(j<=i){
            while (c-i-1>0)
            {
                
            cout<<" ";
            c--;
            }
            
            cout<<"*";
            j++;

        }

        cout<<endl;
        i++;

    }

    return 0;
}