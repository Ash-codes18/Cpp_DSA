class MyCircularQueue {
private:
    int f;
    int b;
    int n;
    vector<int> arr;

public:
    MyCircularQueue(int k){
        f=-1;
        b=-1;
        n=k;
        arr=vector<int>(k);
    }
    
    bool enQueue(int value){
        if(isFull()){
            return false;
        }

        if(isEmpty()){
            f = 0;
        }

        b = (b+1)%n;
        arr[b] = value;
        return true;
    }
    
    bool deQueue(){

        if(isEmpty()){
            return false;
        }

        if(f==b){
            f = -1;
            b = -1;
        }

        else{
            f = (f+1)%n;
        }
        
        return true;
    }
    
    int Front(){
        if(isEmpty()){
            return -1;
        }

        return arr[f];
    }
    
    int Rear(){
        if(isEmpty()){
            return -1;
        }
        return arr[b];
    }
    
    bool isEmpty(){
        return f == -1;
    }
    
    bool isFull(){
        return (b+1)%n == f;
    }
};


/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */