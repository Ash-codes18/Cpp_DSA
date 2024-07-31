#include <iostream>
using namespace std;

class Node{

public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void print(Node* tail){
    Node* temp = tail;

    if(tail==NULL){
        cout<<"List is empty!";
        return;
    }

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);

    cout<<endl;

}

void insertInEmpty(Node* & tail, int val, int data){
        Node* temp = new Node(data);
        tail = temp;
        temp->next=temp;
}



void insertBehind(Node* &tail,int val, int data){

    if(tail==NULL){
        insertInEmpty(tail,val,data);
    }

    else{
        Node* prev = NULL;
        Node* curr = tail;

        while(curr->data != val){
            prev=curr;
            curr=curr->next;
        }

    Node* temp = new Node(data);

        if(prev==NULL){
            Node* last = curr->next;
            while(last->next!=curr){
                last=last->next;
            }
            temp->next=curr;
            last->next=temp;
            tail = temp;
        }

        else{
            prev->next=temp;
            temp->next=curr;
        }

    }

}

void insertAhead(Node* &tail,int val, int data){
    
//empty list
    if(tail==NULL){
        insertInEmpty(tail,val,data);
    }

//Non-empty list
    else{
        Node* curr = tail;
        while(curr->data!=val){
            curr=curr->next;
        }

    Node* temp = new Node(data);
    temp->next = curr->next;
    curr->next = temp;    


    }

}


void deleteval(Node* &tail, int val){

    if(tail==NULL){
        cout<<"List is Empty";
    }

    if(tail->next==tail && val==tail->data){
        tail=NULL;
    }

    else{
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data!=val){
            prev=curr;
            curr=curr->next;
        }
        
        prev->next=curr->next;

        // if(curr==prev){
        //     tail==NULL;
        // }

        if(curr==tail){
            tail=curr->next;      
        }
        curr->next=NULL;
        delete curr;



    }

}



int main() {
    
    Node* tail = NULL;

    insertAhead(tail,10,5);
    print(tail);
    // insertAhead(tail,5,4);
    // print(tail);
    // insertAhead(tail,5,6);
    // print(tail);
    // insertAhead(tail,4,7);
    // print(tail);
    // insertAhead(tail,6,2);
    // print(tail);


    // insertBehind(tail,4,1);
    // print(tail);
    // insertBehind(tail,6,3);
    // print(tail);
    // insertBehind(tail,3,15);
    // print(tail);
    // insertBehind(tail,5,0);
    // print(tail);
    // insertBehind(tail,0,10);
    // print(tail);

    
    deleteval(tail,5);
    print(tail);
    // deleteval(tail,7);
    // print(tail);
    // deleteval(tail,10);
    // print(tail);



    return 0;
}