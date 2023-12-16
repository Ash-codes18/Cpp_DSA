#include <iostream>
using namespace std;


#define ELEMENTS  1, \
                  2, \
                  3, \
                  4, \
                  5



int main(){

    int arr[] = {ELEMENTS};

    cout<<"Elements of Array are:"<<endl;
 
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
 

    return 0;
}