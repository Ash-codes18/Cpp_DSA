#include<iostream>
using namespace std;


int main() {

    int array[10];

    //To initialize the array with value'1'.
    fill_n(array, 10, 69);


    for(int i = 0; i < 10; i++){

        cout << array[i] << endl;

    }
}