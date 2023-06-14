#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no. of rows in the pattern : ";
    cin>>n;

    int i=0;
    char alpha = 'A';

    while (i<n)
    {
        int j=0;
        while (j<=i)
        {   
            cout<<alpha<<" ";
            j++;
            alpha++;
        }
        cout<<endl;
        i++;
    
        
    }
    

    return 0;
}