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
    ListNode* removeNthFromEnd(ListNode* head, int n) {


        if(head==NULL || head->next ==NULL){
            return NULL;
        }


        ListNode* temp = head;
        int len = 0;

        while(temp!=NULL){
            len++;
            temp=temp->next;
        }


if(len==n){
    return head->next;
}


        int ind = len-n;
        int count = 1;

    ListNode* a = head;

        while(count<ind){
            a=a->next;
            count++;
        }

    a->next = a->next->next;

return head;
    }
};