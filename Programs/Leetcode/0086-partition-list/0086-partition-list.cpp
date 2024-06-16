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
public:
    ListNode* partition(ListNode* head, int x) {
        if(!head || !head->next){
            return head;
        }


        ListNode* lesser = new ListNode(0);
        ListNode* dummy1 = lesser;
        ListNode* greater = new ListNode(0);
        ListNode* dummy2 = greater;
        ListNode* curr = head;


        while(curr){
            
            ListNode* temp = new ListNode(curr->val);    
            
            if(curr->val<x){
                dummy1->next = temp;
                dummy1 = dummy1->next;
            }
            else{
                dummy2->next = temp;
                dummy2 = dummy2->next;
            }

            curr=curr->next;

        }

        dummy1->next = greater->next;


        return lesser->next;

    }
};