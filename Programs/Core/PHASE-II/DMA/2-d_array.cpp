#include <iostream>
using namespace std;

int main(){

    int n,m;
    
    cout<<"Enter the no. of rows :";
    cin>>n;
    cout<<"Enter the no. of cols :";
    cin>>m;


    int **arr = new int*[n];    

    for(int i=0;i<n;i++){
        arr[i]=new int[m];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }


cout<<"Before Deletion :"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

cout<<endl<<endl;



    for(int i=0;i<n;i++){
        delete [] arr[i];
    }

    delete []arr;

cout<<"After Deletion : "<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}