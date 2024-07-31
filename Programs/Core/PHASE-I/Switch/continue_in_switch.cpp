//Can't use continue without a loop
/*
#include <iostream>
using namespace std;

int main(){

    int n=1;

    switch(n){
        case  1:
        cout<<"Hey there."<<endl;
        continue;
        default :
        cout<<"How are you?"<<endl;
    }

    return 0;
}

*/

//Within loop : 

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
            continue;
            default :
            cout<<"If i don't use exit()."<<endl;
        }
        exit(0);
 
    }
    

    return 0;
}
