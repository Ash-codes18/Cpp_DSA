// In a deque we can add and remove elements from both front and back, deque is a doubly ended queue

#include <iostream>
#include <deque>

using namespace std;

int main(){

    deque<int> dq;
    
    dq.push_back(10);
    dq.push_front(0);
    dq.push_back(5);
    dq.push_front(2);
    
    cout<<"Before popping : ";

    for(auto x: dq){
        cout << x << " ";
    }

    cout<<endl<<"After popping : ";


    dq.pop_front();
    dq.pop_back();

    for(auto x: dq){
        cout << x << " ";
    }

    //clearing the deque
    dq.clear();

    for(int i=1;i<=5;i++){
        dq.push_back(i*2);
    }

    cout<<endl<<"Deque : ";
    for(auto x: dq){
        cout << x << " ";
    }

    cout<<endl<<"Element at index 2 : "<<dq.at(2);

    cout<<endl<<"Front element : "<<dq.front();

    cout<<endl<<"Back element : "<<dq.back();


    //To delete a range of element

    dq.erase(dq.begin()+1,dq.begin()+3);

    cout<<endl<<"Deque after erasing : ";

    for(auto x: dq){
        cout << x << " ";
    }






    return 0;
}