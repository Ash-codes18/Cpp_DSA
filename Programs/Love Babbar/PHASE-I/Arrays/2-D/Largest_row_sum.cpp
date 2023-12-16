#include <iostream>
#include <climits>
using namespace std;

void Largest_row_sum(int arr[][4]){
    
    int sum=0;
    int max=INT_MIN;
    int row_index;

     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        if(sum>max){
            max=sum;
            row_index=i;

        }
        sum=0;
    }
    cout<<"The largest row sum is: "<<max<<" present at the row: "<<row_index+1<<endl;
}


int main(){

    int arr[3][4];

     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    Largest_row_sum(arr);

    return 0;
}