class MyCircularDeque {
public:

    int f;
    int b;
    int n;
    vector<int> arr;


    MyCircularDeque(int k) {
        f = -1;
        b = -1;
        n = k;
        arr = vector<int>(k);
    }
    
    bool insertFront(int value) {
        if(isFull()) return false;
        
        if(isEmpty()){
            f=0;
            b=0;
        }

        else if(f==0){
            f = n-1;
        }

        else{
            f--;
        }

        arr[f] = value;
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull()) return false;
        
        if(isEmpty()){
            f=0;
            b=0;
        }
        else{
            b=(b+1)%n;
        }

        arr[b] = value;
        return true;
    }
    
    bool deleteFront() {

        if(isEmpty()) return false;

        if(f==b){
            f=-1;
            b=-1;
        }
        else{
            f = (f+1)%n;
        }
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty()) return false;

        if(b==f){
            f=-1;
            b=-1;
        }

        else{
            b = (b-1+n)%n;
        }

        return true;

    }
    
    int getFront() {
        if(isEmpty()) return -1;
        return arr[f];
    }
    
    int getRear() {
        if(isEmpty()) return -1;
        return arr[b];
    }
    
    bool isEmpty() {
        return f==-1;
    }
    
    bool isFull() { 
       return ((f==0 && b==n-1) || (f-1+n)%n==b);
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */