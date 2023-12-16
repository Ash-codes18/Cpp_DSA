// The first element in the priority queue is always the greatest (max) 

#include <iostream>
#include <queue>

using namespace std;

int main(){

    //Max heap
    priority_queue<int> maxi; //Always returns the max element in the heap

    //Min heap
    priority_queue<int, vector<int>, greater<int> > mini; //Always returns the min element in the heap


    maxi.push(1);
    maxi.push(5);
    maxi.push(3);
    maxi.push(7);

    cout<<"Max heap : ";
    while(!maxi.empty()){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }

    cout<<endl;
    mini.push(-20);
    mini.push(10);
    mini.push(5);
    mini.push(7);

    cout<<"Min heap : ";
    while(!mini.empty()){
        cout<<mini.top()<<" ";
        mini.pop();
    }

    return 0;
}