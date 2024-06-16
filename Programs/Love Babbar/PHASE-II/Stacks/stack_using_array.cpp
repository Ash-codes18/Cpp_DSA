#include <iostream>
using namespace std;

class stack{

    public:
        int *arr;
        int top;
        int capacity;

        stack(int size){
            arr = new int[size];
            capacity = size;
            top = -1;
        }

        void push(int x) {
            if(top == capacity-1){
                cout << "Stack is full" << endl;
                return;
            }
            top++;
            arr[top] = x;
        }

        void pop(){
            if(top<0){
                cout << "Stack is empty" << endl;
                return;
            }
            top--;
        }

        int peek(){
            if(top<0){
                cout << "Stack is empty" << endl;
                return -1;
            }
            return arr[top];
        }

        bool empty(){
            if(top<0){
                return true;
            }
            return false;
        }

        int size(){
            return top+1;
        }

};


int main() {

    stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << "Size of stack: " << st.size() << endl;
    cout << "Is stack empty: " << st.empty() << endl;
    cout << "Top element: " << st.peek() << endl;

    st.pop();
    
    cout << "Top element after pop: " << st.peek() << endl;

    st.push(5);
    st.push(6);

    cout<<st.peek()<<endl;

    return 0;
}