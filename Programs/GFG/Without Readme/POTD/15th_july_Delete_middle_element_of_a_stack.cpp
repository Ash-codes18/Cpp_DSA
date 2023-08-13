//User function template for C++
class Solution {
public:
    void deleteMid(std::stack<int>& s, int sizeOfStack) {
        std::stack<int> st;

        if (s.size() != 0) {
            int mid = (sizeOfStack / 2) + 1;
            for (int i = 1; i < mid; i++) {
                st.push(s.top());
                s.pop();
            }
            s.pop();
            while (!st.empty()) {
                s.push(st.top());
                st.pop();
            }
        } else {
            int mid = sizeOfStack / 2;
            for (int i = 1; i <= mid; i++) {
                st.push(s.top());
                s.pop();
            }
            s.pop();
            while (!st.empty()) {
                s.push(st.top());
                st.pop();
            }
        }
    }
};
