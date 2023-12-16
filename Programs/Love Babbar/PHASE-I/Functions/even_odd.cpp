#include <iostream>
using namespace std;

void even_odd(int a){

    if(a%2==0){
        cout<<"The number is even."<<endl;
    }
    else{
        cout<<"The number is odd."<<endl;
    }

}


int main(){

while(1){

int i;
cout<<"Options : "<<endl<<"1. Check Even/Odd"<<endl<<"2. Exit"<<endl<<"Enter your choice : ";
cin>>i;

if(i==1){
    int a;
    cout<<"Enter the number : ";
    cin >>a;
    even_odd(a);
}
else if (i==2){
    break;
}

else{
    cout<<"Please enter a valid option."<<endl;
}
}

    return 0;
}