#include <iostream>
using namespace std;

class queue{
    public:

    int front;
    int back;
    int size;
    int *arr;

    queue(int n){
        front = -1;
        back = -1;
        size = n;
        arr = new int[size];
    }

    void enqueue(int x){
        if(back == size-1){
            cout<<"Queue is full"<<endl;
            return;
        }
        if(front == -1){
            front++;
        }
        back++;
        arr[back] = x;
    }

    void dequeue(){
        if(front == -1 || front>back){
            cout<<"Queue is empty"<<endl;
            return;
        }
        front++;
    }

    void display(){
        if(front == -1 || front>back){
            cout<<"Queue is empty"<<endl;
            return;
        }
        for(int i=front; i<=back; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


    bool empty(){
        if(front == -1 || front>back){
            return true;
        }
        return false;
    }

    int length(){
        return back-front+1;
    }

    int peek(){
        if(front == -1 || front>back){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }

    int last(){
        if(front == -1 || front>back){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[back];
    }



};


int main() {
    int n;
    cout<<"Enter the size of the queue: ";
    cin>>n;
    queue q(n);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout<<q.peek()<<endl;
    cout<<q.last()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    cout<<q.last()<<endl;
    cout<<q.length()<<endl;
    cout<<q.empty()<<endl;
    q.display();
    
    
    return 0;
}