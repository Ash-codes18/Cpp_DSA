#include <iostream>
using namespace std;

class stack{

    public:
        int data;
        stack *next;

        stack(int val){
            data = val;
            next = NULL;
        }

        void push(int x) {
            
        }

        void pop(){
            
        }

        int peek(){
           
        }

        bool empty(){
            
        }

        int size(){
            
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