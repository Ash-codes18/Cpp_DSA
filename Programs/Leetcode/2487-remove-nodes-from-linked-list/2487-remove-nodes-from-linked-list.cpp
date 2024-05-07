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



//Approach-1 -> TLE for 2 test cases

/*
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;

        while(temp->next!=NULL){
            if(temp->next->val > temp->val){
                if(prev!=NULL){
                    prev->next=temp->next;
                    prev=NULL;
                    temp=head;
                }
                else{
                    head = temp->next;
                    temp=temp->next;
                }
            }
            else{
                prev=temp;
                temp=temp->next;
            }
        }


        return head;

    }
};

*/



// Approach-2


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
    ListNode* removeNodes(ListNode* head) {
        

        ListNode* nhead = reverse(head);
        ListNode* temp = nhead;


        while(temp->next!=NULL){
            if(temp->next->val < temp->val){
                temp->next = temp->next->next;
            }
            else{
                temp =temp->next;
            }
        }


        return reverse(nhead);

    }
};

