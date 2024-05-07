/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {


private:

    ListNode* reverse(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL;

        while(temp!=NULL){
            ListNode* nxt = temp->next;
            temp->next=prev;
            prev=temp;
            temp = nxt;
        }

        return prev;

    }



public:
    ListNode* doubleIt(ListNode* head) {

        ListNode* nhead = reverse(head);
        ListNode* temp = nhead;
        ListNode* last;
        int value;
        bool carry = 0;
        

        while(temp!=NULL){
            if(carry){
                value = (temp->val * 2) + 1;
            }
            else{
                value = temp->val * 2;
            }
            if(value>=10){
                temp->val = value-10;
                carry = true;
            }
            else{
                temp->val = value;
                carry = false;
            }
            last = temp;
            temp=temp->next;
        }

        if(carry){
            ListNode* add = new ListNode(1,NULL); 
            last->next = add;
        }


        return reverse(nhead);

    }
};