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

    ListNode* rev(ListNode* head){

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;

    }


public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        if(!l1){
            return l2;
        }
        if(!l2){
            return l1;
        }

        l1 = rev(l1);
        l2 = rev(l2);


        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* ans = new ListNode(0);
        ListNode* result = ans;

        int carry = 0;


        while(temp1 || temp2 || carry){

            int sum = 0;

            if(temp1){
                sum+=temp1->val;
                temp1=temp1->next;
            }

            if(temp2){
                sum+=temp2->val;
                temp2=temp2->next;
            }

            sum+=carry;

            carry = sum/10;
            ListNode* temp = new ListNode(sum%10);
            ans->next = temp;
            ans = ans->next;


        }
        
        result = rev(result->next);

    return result;

    }
};