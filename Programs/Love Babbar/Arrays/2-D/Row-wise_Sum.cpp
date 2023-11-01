#include <iostream>
using namespace std;

void printsum(int arr[][4]){
    
    int sum=0;

     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        cout<<"Sum of row "<<i+1<<"= "<<sum;
        cout<<endl;
        sum=0;
    }
}


int main(){

    int arr[3][4];

     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    printsum(arr);

    return 0;
}