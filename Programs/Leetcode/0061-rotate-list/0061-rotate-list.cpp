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
     ListNode* solve(ListNode* head, int k) {

        if(k<1){
            return head;
        }


        ListNode* prev = NULL;
        ListNode* temp = head; 

        while(temp->next){
            prev = temp;
            temp = temp->next;
        }

        prev->next = NULL;
        temp->next = head;

        return solve(temp,k-1);

     }

public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head || !head->next){
            return head;
        }

        if(k<1){
            return head;
        }

        ListNode* temp = head;
        int n = 1;

        while(temp->next){
            n++;
            temp = temp->next;
        }

        k%=n;

        return solve(head,k);

    }
};