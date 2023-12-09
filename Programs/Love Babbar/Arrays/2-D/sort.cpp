#include <iostream>
#include <algorithm>
using namespace std;

int main(){


     int arr[3][4] = {
        {15,  12,  30,  24},
        {52,  66,  27,  821},
        {92, 120, 11, 132}
    };

    int oned[12];
    int count=0;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            oned[count]=arr[i][j];
            count++;
        }
    }

    sort(oned,oned+12);
    count=0;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            arr[i][j]=oned[count];
            count++;
        }
    }



    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}