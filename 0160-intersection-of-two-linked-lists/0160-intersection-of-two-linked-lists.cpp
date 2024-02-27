/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        if(headA==NULL || headB==NULL){
            return NULL;
        }

        int a=0;
        int b=0;

        ListNode* temp1=headA;
        ListNode* temp2=headB;

        while(temp1!=NULL){
            temp1=temp1->next;
            a++;
        }

        while(temp2!=NULL){
            temp2=temp2->next;
            b++;
        }

        if(a>b){
            int n=a-b;
            while(n--){
                headA=headA->next;
            }
        }
        else{
            int n=b-a;
            while(n--){
                headB=headB->next;
            }
        }

        while(headA!=NULL){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }

return NULL;
        
    }
};