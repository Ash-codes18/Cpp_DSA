#include <iostream>
using namespace std;

void reachhome(int a, int b){

    if(a==b){
        cout<<"Dest. reached!"<<endl;
        return ;
    }

    cout<<"Steps taken from source = "<<a<<endl;
    reachhome(a+1,b);

}

int main(){

    int src=1;
    int dest=10;

    reachhome(src,dest);

    return 0;
}