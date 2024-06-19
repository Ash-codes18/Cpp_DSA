#include <iostream>
#include <stack>
using namespace std;


stack<int> sirtedInsert(stack<int> st, int x) {
    if (st.empty() || st.top() <= x) {
        st.push(x);
        return st;
    }

    int temp = st.top();
    st.pop();
    st = sirtedInsert(st, x);
    st.push(temp);

    return st;
}

stack<int> sortStack(stack<int> st) {
    if (st.empty()) {
        return st;
    }

    int temp = st.top();
    st.pop();
    st = sortStack(st);
    st = sirtedInsert(st, temp);

    return st;
}


int main() {

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    stack<int> st;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    st = sortStack(st);

    cout << "Sorted stack: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    

    return 0;
}