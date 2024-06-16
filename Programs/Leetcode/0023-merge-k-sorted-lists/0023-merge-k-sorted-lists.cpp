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

    ListNode* merge(ListNode* l1, ListNode* l2){

        if(!l1){
            return l2;
        }
        if(!l2){
            return l1;
        }

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;


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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int n = lists.size();

        if(n==0){
            return NULL; 
        }
        if(n==1){
            return lists[0];
        }

        int interval = 1;

        while(interval<n){
            for(int i=0;i<n-interval;i += interval*2){
                lists[i] = merge(lists[i],lists[i+interval]);
            }
            interval *= 2;
        }
        
        return lists[0];

    }
};