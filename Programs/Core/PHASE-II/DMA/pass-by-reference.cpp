#include <iostream>
using namespace std;

void update(int a){
    a++;
}

void update2(int& a){
    a++;
}

//bad practice, issue
int& update3(int a){
    int n=a;
    //since this n is a local variable
    int& ans=n;
    return ans;

    // when we return ans which is basically n, i.e is a local variable which will be removed from memory once the function ends what are we returning, this is what causes the issue

    // This leads to what's known as a "dangling referenc"e
}


int main(){

    int a=5;

    cout<<"pass by value : "<<endl;
    cout<<"before : "<<a<<endl;
    update(a);
    cout<<"after : "<<a<<endl<<endl;

    cout<<"pass by reference : "<<endl;
    cout<<"before : "<<a<<endl;
    update2(a);
    cout<<"after : "<<a<<endl;

    int bad=update3(a);
    cout<<bad<<endl;


    return 0;
}