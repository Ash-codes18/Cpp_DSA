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
    ListNode* oddEvenList(ListNode* head) {
        
        if(!head || !head->next){
            return head;
        }

        ListNode* even = new ListNode();
        ListNode* even1 = even;
        ListNode* odd = new ListNode();
        ListNode* odd1 = odd;
        ListNode* curr = head->next;
        int n = 1;


        bool flag = (head->val%2==0)?true:false;


        while(curr){
            
            ListNode *temp = NULL;
            ListNode *next = curr->next;
            temp=curr;
            temp->next = NULL;

            if(n%2!=0){
                even1->next = temp;
                even1=even1->next;
            }

            else{
                odd1->next = temp;
                odd1=odd1->next;
            }

            n++;
            curr=next;

        }


        if(odd->next){
            head->next = odd->next;
            odd1->next  = even->next;
        }
        else{
            head->next = even->next;
        }


        return head;

    }
};