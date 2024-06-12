/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/


// Approach 1 -> Using Extra Space


// class Solution {
// public:
//     Node* copyRandomList(Node* head) {

//         Node* temp1 = head;
//         Node* dummy = new Node(0);
//         Node* temp2 = dummy;
//         map<Node*,Node*> mp;

//         while(temp1!=NULL){
//             Node* temp = new Node(temp1->val);
//             temp2->next = temp;
//             mp[temp1]=temp2->next;
//             temp1=temp1->next;
//             temp2=temp2->next;
//         }

//         temp1=head;
//         temp2=dummy->next;

//         while(temp2!=NULL){
//             temp2->random = mp[temp1->random];
//             temp1=temp1->next;
//             temp2=temp2->next;
//         }


//         return dummy->next;
//     }
// };



// Approach-2 -> Without Using Extra Space


class Solution {
public:
    Node* copyRandomList(Node* head) {

        Node* temp1 = head;
        Node* dummy = new Node(0);
        Node* temp2 = dummy;

        while(temp1!=NULL){
            Node* temp = new Node(temp1->val);
            temp2->next = temp;
            temp1=temp1->next;
            temp2=temp2->next;
        }

        temp1=head;
        temp2=dummy->next;

        while(temp2!=NULL){
            Node* next1 = temp1->next;
            Node* next2 = temp2->next;

            temp1->next=temp2;
            temp2->next=next1;

            temp1=next1;
            temp2=next2;
        }


        temp1=head;


        while(temp1){
            if(temp1->random){
                temp1->next->random = temp1->random->next;
            }
            else{
                temp1->next->random=NULL;
            }

            temp1=temp1->next->next;
        }


        temp1=head;

        while(temp1 && temp1->next){
            Node* temp = temp1->next;
            temp1->next=temp1->next->next;
            temp1=temp1->next;
            if(temp->next){
                temp->next=temp1->next;
            }
        }


        return dummy->next;
    }
};