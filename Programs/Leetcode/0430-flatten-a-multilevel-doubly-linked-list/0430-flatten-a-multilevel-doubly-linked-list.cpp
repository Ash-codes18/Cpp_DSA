/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {




public:
    Node* flatten(Node* head) {

        Node* temp = head;


        while(temp){
            if(temp->child){
                Node* next = temp->next;

                temp->next = temp->child;
                temp->next->prev = temp;
                temp->child=NULL;

                Node* child = temp->next;

                while(child->next){
                    child=child->next;
                }

                child->next = next;

                if(next){
                    next->prev = child;
                }

            }
            temp=temp->next;
        }

return head;
        
    }
};