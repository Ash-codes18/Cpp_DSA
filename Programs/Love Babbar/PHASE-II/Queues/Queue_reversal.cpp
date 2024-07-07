#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    stack<int> s;w
    while(!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }


    return 0;
}