// Array created using the stl library is a static array meaning that we cannot update the values stored in it. 

#include <iostream>
#include <array>
using namespace std;

int main(){

    int normal_array[4]={1,2,4,8};

    array<int,4> stl_arr = {5,6,7,8};
    int n= stl_arr.size();

    cout<<"Array : ";
    for(int i=0;i<n;i++){
        cout<<stl_arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Element at index 3 : "<<stl_arr.at(3)<<endl;

    cout<<"Checking if the array is empty or not : "<<stl_arr.empty()<<endl;

    cout<< "First Element : "<<stl_arr.front()<<endl;

    cout<< "last Element : "<<stl_arr.back()<<endl;

    return 0;
}