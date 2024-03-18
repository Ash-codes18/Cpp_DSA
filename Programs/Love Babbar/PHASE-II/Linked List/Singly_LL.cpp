// Insertion Traversal and Deletion

#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

//constructor
        Node(int data){
            this->data=data;
            this->next=NULL;
        }


};


void insertAtHead(Node* &head, int data){

    //Creating a new node
    Node *temp = new Node(data);
    temp->next = head;
    head=temp;

}

void insertAtTail(Node* &tail, int data){

    Node *temp = new Node(data);
    tail->next=temp;
    tail=temp;

}

void insertAtMid(Node* &tail, Node* &head, int position, int data){

    if(position==1){
        insertAtHead(head,data);
        return;
    }

    int count=1;
    Node* temp= head;

    while(count<position-1){
        temp=temp->next;
        count++;
    }

    //Inserting at last position
    if(temp->next==NULL){
        insertAtTail(tail,data);
    }

    Node* nayi = new Node(data);

    nayi->next=temp->next;
    temp->next=nayi;

}



void deletepos(Node* &head, Node* &tail, int pos){
    
    Node* cur=head;
    Node* prev=NULL;

    if(pos==1){
        head=head->next;
// free memory of the start node
        delete cur;
        return;
    }

    int count=1;

    while(count<pos){
        prev=cur;
        cur=cur->next;
        count++;
    }

    // If deleting the last node, update the tail pointer
    if(cur == tail){
        tail = prev;
    }


    prev->next=cur->next;
    delete cur;

}

void deleteval(Node* &head, Node* &tail, int val){

    Node* cur=head;
    Node* prev=NULL;

    if(cur->data==val){
        head=head->next;
        delete cur;
        return;
    }

    while(cur->data!=val){
        prev=cur;
        cur=cur->next;
    }

    // If deleting the last node, update the tail pointer
    if(cur == tail){
        tail = prev;
    }

    prev->next=cur->next;
    delete cur;

}



void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main() {

    Node *ll = new Node(5);

    Node *head = ll;
    Node *tail = ll;
    insertAtHead(head,8);
    insertAtHead(head,4);
    insertAtHead(head,2);

    print(head);
    cout<<endl<<endl;

    insertAtTail(tail,3);
    insertAtTail(tail,6);
    insertAtTail(tail,9);

    print(head);
    cout<<endl<<endl;

    insertAtMid(tail,head,5,10);
    insertAtMid(tail,head,1,11);
    print(head);
    cout<<endl;
    cout<<"Head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    cout<<endl<<endl;

    deletepos(head,tail,9);
    // deleteval(head,tail,11);
    deletepos(head,tail,3);
    print(head);
    cout<<endl;
    cout<<"Head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    cout<<endl<<endl;

    
    deleteval(head,tail,11);
    // deleteval(head,tail,9);
    print(head);
    cout<<endl;
    cout<<"Head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;
    cout<<endl<<endl;



    return 0;
}