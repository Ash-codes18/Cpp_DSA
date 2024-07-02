// Using Extra space for returning min element

// class MinStack {
// public:
//     vector<int> ele;
//     vector<int> currmin;
//     int tempmin;
//     int ind;

//     MinStack() {
//         tempmin=INT_MAX;
//         ind=-1;
//     }
    
//     void push(int val) {
//         ind++;
//         ele.push_back(val);
//         tempmin=min(val,tempmin);
//         currmin.push_back(tempmin);
//     }
    
//     void pop() {
//         ele.pop_back();
//         currmin.pop_back();
//         ind--;
//         if(ind<0){
//             tempmin=INT_MAX;
//         }
//         else{
//             tempmin = currmin[ind];
//         }
//     }
    
//     int top() {
//         return ele[ind];
//     }
    
//     int getMin() {
//         return currmin[ind];
//     }
// };



// Without using extra space for returning the min element

class MinStack {
public:
    vector<long long> ele;
    long long tempmin;
    int ind;

    MinStack() {
        tempmin=LLONG_MAX;;
        ind=-1;
    }
    
 
    void push(int val) {
        if(ele.empty()){
            ele.push_back(0); 
            tempmin = val; 
        } 
        else{
            ele.push_back(val - tempmin); 
            if(val < tempmin){
                tempmin = val; 
            }
        }
    }
    
    void pop() {
        if (ele.empty()) return;
        
        long long top = ele.back();
        ele.pop_back();
        
        if(top < 0){
            tempmin = tempmin - top; 
        }
    }
    
    int top(){

        long long top = ele.back();
        
        if(top > 0){
            return top + tempmin; 
        }
        else{
            return tempmin; 
        }
    }
    
    int getMin() {
        return tempmin;
    }
};


// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(val);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */