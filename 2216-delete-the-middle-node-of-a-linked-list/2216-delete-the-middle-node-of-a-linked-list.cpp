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
    ListNode* deleteMiddle(ListNode* head) {
        
        if(!head || !head->next){
            return NULL;
        }

        ListNode* fp = head;
        ListNode* sp = head;
        ListNode* prev = NULL;

        while(fp && fp->next){
            prev = sp;
            sp=sp->next;
            fp=fp->next->next;
        }

        prev->next = sp->next;
        return head;
    }
};