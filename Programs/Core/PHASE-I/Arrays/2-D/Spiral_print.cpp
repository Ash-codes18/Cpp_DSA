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


    int sr=0;
    int sc=0;
    int er=nRows-1;
    int ec=nCols-1;



    int count=0;
    int mul=nRows*nCols;

    while(count<mul){


//starting Row

    for(int i=sc;i<=ec;i++){
        if(count<mul){
            cout<<arr[sr][i]<<" ";
            count++;
        }
    }
sr++;



//Ending Col

    for(int i=sr;i<=er;i++){
        if(count<mul){
            cout<<arr[i][ec]<<" ";
            count++;
        }
    }
ec--;   



//Ending Row

    for(int i=ec;i>=sc;i--){
        if(count<mul){
            cout<<arr[er][i]<<" ";
            count++;
        }
    }
er--;



//starting col

    for(int i=er;i>=sr;i--){
        if(count<mul){
            cout<<arr[i][sc]<<" ";
            count++;
        }
    }
sc++;

    }

    return 0;
}