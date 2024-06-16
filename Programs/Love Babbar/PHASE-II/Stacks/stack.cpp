// Stack = LIFO (Last In First Out)

#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Size of stack: " << s.size() << endl;
    cout << "Is stack empty: " << s.empty() << endl;
    cout << "Top element: " << s.top() << endl;

    s.pop();
    
    cout << "Top element after pop: " << s.top() << endl;

    return 0;
}