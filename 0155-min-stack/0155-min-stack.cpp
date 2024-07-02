class MinStack {
public:
    vector<int> ele;
    vector<int> currmin;
    int tempmin;
    int ind;

    MinStack() {
        tempmin=INT_MAX;
        ind=-1;
    }
    
    void push(int val) {
        ind++;
        ele.push_back(val);
        tempmin=min(val,tempmin);
        currmin.push_back(tempmin);
    }
    
    void pop() {
        ele.pop_back();
        currmin.pop_back();
        ind--;
        if(ind<0){
            tempmin=INT_MAX;
        }
        else{
            tempmin = currmin[ind];
        }
    }
    
    int top() {
        return ele[ind];
    }
    
    int getMin() {
        return currmin[ind];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */