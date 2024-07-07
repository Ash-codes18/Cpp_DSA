#include <iostream>
#include <queue>
using namespace std;

class stack{

public: 
    queue<int> q1;
    queue<int> q2;

    void push(int x){
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    int pop(){
        if(q1.empty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        int topval = q1.front();
        q1.pop();
        return topval;
    }

    int top(){
        if(q1.empty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return q1.front();
    }

    bool empty(){
        if(q1.empty()){
            return true;
        }
        return false;
    }

    int size(){
        return q1.size();
    }
};


int main() {
    

    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;


    return 0;
}