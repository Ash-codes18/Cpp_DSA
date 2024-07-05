#include <iostream>
#include <stack>
using namespace std;


class queue{

    public:
    stack<int> s1;
    stack<int> s2;

    void push(int x){
        s1.push(x);
    }

    int pop(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval = s2.top();
        s2.pop();
        return topval;
    }

    bool empty(){
        if(s1.empty() && s2.empty()){
            return true;
        }
        return false;
    }
    
    int size(){
        return s1.size() + s2.size();
    }
    
    int front(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
    
    int back(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        if(s1.empty()){
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }
        return s1.top();
    }
    
    void display(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        stack<int> temp = s2;
        while(!temp.empty()){
            cout<<temp.top()<<" ";
            temp.pop();
        }
        cout<<endl;
    }
    
    void clear(){
        while(!s1.empty()){
            s1.pop();
        }
        while(!s2.empty()){
            s2.pop();
        }
    }
    
    void swap(queue &q){
        stack<int> temp = s1;
        s1 = q.s1;
        q.s1 = temp;
        temp = s2;
        s2 = q.s2;
        q.s2 = temp;
    }
    
    void reverse(){
        stack<int> temp;
        while(!s1.empty()){
            temp.push(s1.top());
            s1.pop();
        }
        s1 = temp;
    }

};


int main() {

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.display();
    cout<<q.pop()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    q.display();
    q.reverse();
    q.display();
    q.clear();
    q.display();
    
    return 0;
}