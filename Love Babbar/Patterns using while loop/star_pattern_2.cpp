#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no. of rows in the pattern : ";
    cin>>n;

    
    int i=0;
    
    while(i<n){

        int space = 0;
        while (space<i)
        {
            
            cout<<" ";
            space++;
        }

        int j=0;
            
        while(j<n-i){
           
            
            cout<<"*";
            j++;

        }

        cout<<endl;
        i++;

    }

    return 0;
}