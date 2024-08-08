// Why am i so dumb - Bruteforce


// class MyStack {

// private:
//     queue<int> a;
//     queue<int> b;

// public:

//     void push(int x) {
//         a.push(x);        
//     }
    
//     int pop() {
//         int temp = a.front();
//         a.pop();
//         while(!a.empty()){
//             b.push(temp);
//             temp = a.front();
//             a.pop();
//         }
//         queue<int> x;
//         a=b;
//         b=x;
//         return temp;
//     }
    
//     int top() {
//         int temp = a.front();
//         while(!a.empty()){
//             b.push(temp);
//             a.pop();
//             if(!a.empty()) temp = a.front();
//         }
//         queue<int> x;
//         a=b;
//         b=x;
//         return temp;
//     }
    
//     bool empty() {
//         return a.empty();
//     }
// };


class MyStack {

private:
    queue<int> q;

public:

    void push(int x) {
        q.push(x);
        for(int i=0;i<q.size()-1;i++){
            q.push(q.front());
            q.pop();
        }       
    }
    
    int pop() {
        int ele = q.front();
        q.pop();
        return ele;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};