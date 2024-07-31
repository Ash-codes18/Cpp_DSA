#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    stack<char> st;
    
    for (int i = 0; i < s.length(); i++) {
        st.push(s[i]);
    }

    cout << "Reversed string: ";
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }

    return 0;
}