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


// Approach-1 -> Iterative


 /*
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* prev = NULL;
        ListNode* cur = head;

        while(cur!=NULL){
            ListNode* agla=cur->next;
            cur->next=prev;
            prev=cur;
            cur=agla;
        } 


        return prev;

    }
};

*/


// Approach-2 -> Recursive


/*
class Solution {

private:

    ListNode* rev(ListNode* head, ListNode* prev){
            
            if(head == NULL){
                return prev;
            }

            ListNode* fwd = head->next;
            head->next = prev;
            prev = head;
            

            return rev(fwd,prev);
    }

public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }


       return rev(head,NULL);

    }
};

*/

// Approach-3 -> Smaller recursive

class Solution {

public:
    ListNode* reverseList(ListNode* head) {

        if(head==NULL || head->next == NULL){
            return head;
        }

        ListNode* smallhead = reverseList(head->next);

        head->next->next = head;
        head->next = NULL;


        return smallhead;

    }
};