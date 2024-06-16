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

    ListNode* getmid(ListNode* ll){
        ListNode* slow = ll;
        ListNode* fast = ll->next;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        return slow;

    }

     ListNode* msort(ListNode* &list1, ListNode* &list2) {
            if(list1==NULL){
                return list2;
            }
            
            if(list2==NULL){
                return list1;
            }

            ListNode* temp1=list1;
            ListNode* temp2=list2;
            ListNode* ans = new ListNode();
            ListNode* result = ans;


            while(temp1!=NULL && temp2!=NULL){
                if(temp1->val>temp2->val){
                   ListNode* temp = new ListNode(temp2->val);
                   ans->next=temp;
                   temp2=temp2->next;
                }
                else{
                   ListNode* temp = new ListNode(temp1->val);
                   ans->next=temp;
                   temp1=temp1->next;
                }
                   ans=ans->next; 

            }


            while(temp1!=NULL){
                ListNode* temp = new ListNode(temp1->val);
                ans->next=temp;
                temp1=temp1->next;
                ans=ans->next;
            }

            while(temp2!=NULL){
                ListNode* temp = new ListNode(temp2->val);
                ans->next=temp;
                temp2=temp2->next;
                ans=ans->next;
            }

return result->next;


    }


public:
    ListNode* sortList(ListNode* head) {
        
        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* mid = getmid(head);

        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = NULL;

        left = sortList(left);
        right = sortList(right);

        return msort(left,right);


    }
};