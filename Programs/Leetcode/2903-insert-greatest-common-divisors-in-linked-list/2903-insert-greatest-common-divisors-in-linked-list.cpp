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
    int gcd(int a, int b){
        if(a==0) return b;
        return gcd(b%a,a); 
    }

public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode* curr = head;
        ListNode* prev = NULL;

        while(curr){
            if(prev){
                int hcf = gcd(curr->val,prev->val);
                ListNode* node = new ListNode(hcf);
                node->next = prev->next;
                prev->next = node; 
            }
            prev = curr;
            curr = curr->next;
        }

        return head;
    }
};