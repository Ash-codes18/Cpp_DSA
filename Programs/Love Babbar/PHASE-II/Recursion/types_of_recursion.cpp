#include <iostream>
using namespace std;


// This is tail recursion since we are calling the recursive relation after the processing part
void tail(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    tail(n-1);
}
// It executes the processing part as it goes down the recursive tree



// This is head recursion since we are calling the recursive relation before the processing part
void head(int n){
    if(n==0){
        return ;
    }
    head(n-1);
    cout<<n<<endl;
}

// It executes the processing part as it goes back to the top of the recursive tree from the bottom after reaching the base case


int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;

    tail(n);
    cout<<endl;
    head(n);

    return 0;
}