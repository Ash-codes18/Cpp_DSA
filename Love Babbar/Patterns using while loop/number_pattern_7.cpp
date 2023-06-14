#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no. of rows in the pattern : ";
    cin>>n;

    
    int i=0;
    int k=1;
    
    while(i<n){

        int space = n-i-1;
        while (space>0)
        {
            
            cout<<" ";
            space--;
        }

        int j=0;
            
        while(j<=i){
           
            
            cout<<k;
            j++;
            k++;


        }

        cout<<endl;
        i++;

    }

    return 0;
}