#include <iostream>
using namespace std;
    

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int data){
            this->data=data;
            this->prev=NULL;
            this->next=NULL;
        }
};



int getLength(Node* head){
        Node* temp = head;
        int length=0;

        while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
}



void print(Node* head, Node* tail){

    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    if(head!=NULL && tail!=NULL){
        cout<<"Head = "<<head->data;
        cout<<endl;
        cout<<"Tail = "<<tail->data;
        cout<<endl<<endl;
    }

}


void insertAtHead(Node* &head, Node* &tail, int data) {
    Node* temp = new Node(data);
    if (head == NULL) {
        head = temp;
        tail = temp;
    } else {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}



void insertAtTail(Node* &head, Node* &tail, int data) {
    Node* temp = new Node(data);
    if (tail == NULL) {
        head = temp;
        tail = temp;
    } else {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPos(Node* &head, Node* &tail, int pos, int data){
    if(pos<=1){
        insertAtHead(head,tail,data);
        return;
    }
    int count=1;
    Node* cur = head;
    

    while(cur != NULL && count<pos-1){
        cur=cur->next;
        count++;
    }

    if(cur->next==NULL){
        insertAtTail(head,tail,data);
        return;
    }

    Node* temp = new Node(data);

    temp->next = cur->next;
    if (cur->next != NULL) {
        cur->next->prev = temp;
    }
    cur->next = temp;
    temp->prev = cur;
    if (cur == tail) {
        tail = temp;
    }

}

void deletepos(Node* &head, Node* &tail, int pos) {
    if (pos == 1) {
        if (head == NULL) {
            cout << "Position Does not Exist in the LL" << endl;
            return;
        }

        Node* temp = head;
        head = temp->next;
        if (head != NULL) {
            head->prev = NULL;
        } else {
            tail = NULL;
        }
        temp->next = NULL;
        delete temp;
        return;
    }

    int cnt = 1;
    Node* pre = NULL;
    Node* cur = head;
    
    while (cur != NULL && cnt < pos) {
        pre = cur;
        cur = cur->next;
        cnt++;
    }

    if (cur == NULL) {
        cout << "Position Does not Exist in the LL" << endl;
        return;
    }

    if (cur == tail) {
        tail = pre;
    }

    pre->next = cur->next;
    if (cur->next != NULL) {
        cur->next->prev = pre;
    }
    cur->next = NULL;
    cur->prev = NULL;
    delete cur;
}


int main() {

    // Node* node1 = new Node(10);
    Node* head = NULL;
    Node* tail = NULL;

    print(head,tail);
    cout<<getLength(head);
    cout<<endl<<endl;

    insertAtHead(head,tail,11);
    print(head,tail);
    insertAtHead(head,tail,12);
    print(head,tail);
    cout<<getLength(head);
    cout<<endl<<endl;


    insertAtTail(head,tail,9);
    print(head,tail);
    insertAtTail(head,tail,8);
    print(head,tail);
    insertAtTail(head,tail,7);
    print(head,tail);


    insertAtPos(head,tail,6,23);
    insertAtPos(head,tail,1,21);
    insertAtPos(head,tail,3,23);
    print(head,tail);

    deletepos(head,tail,1);
    print(head,tail);
    deletepos(head,tail,7);
    print(head,tail);
    deletepos(head,tail,2);
    print(head,tail);


    
    return 0;
}