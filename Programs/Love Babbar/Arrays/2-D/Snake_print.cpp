#include <iostream>
using namespace std;

int main(){


     int arr[3][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };
    int nRows=3;
    int nCols=4;


    int count=0;
    int cind=0;

    while(count!=nRows*nCols){


        if(cind%2==0){
            for(int i=0;i<nRows;i++){
                cout<<arr[i][cind]<<" ";
                count++;
            }
            cind++;
        }
        else{
            for(int i=nRows-1;i>=0;i--){
                cout<<arr[i][cind]<<" ";
                count++;
            }
            cind++;
        }
    }
    


    return 0;
}