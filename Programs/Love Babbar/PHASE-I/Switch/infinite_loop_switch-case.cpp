#include <iostream>
using namespace std;

int main(){

    while (1)
    {
        cout<<"We can't use the break statement!"<<endl;
        int n=1;
        switch(n){
            case  1:
            cout<<"This is gonna keep printing."<<endl;
            default :
            cout<<"If i don't use exit()."<<endl;
        }
        exit(0);
 
    }
    

    return 0;
}