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

    ListNode* reversell(ListNode* head, int n){

        ListNode* prev = NULL;
        ListNode* next = NULL;
        ListNode* curr = head;


        while(curr && n){

            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr= next;
            n--;

        }

        return prev;

    }


public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(!head || !head->next || left==right){
            return head;
        }


        int a = left;
        
        ListNode* temp = head;
        ListNode* prev = NULL;
        
        int n = right-left+1;

        left--;

        while(left--){
            prev = temp;
            temp = temp->next;
        }

        ListNode* temp2 = head;

        while(right--){
            temp2=temp2->next;
        }


        ListNode* last = temp;

        temp = reversell(temp,n);

        if(a==1){
            last->next = temp2;
            return temp;
        }

        last->next = temp2;
        prev->next = temp;

        return head;

    }
};