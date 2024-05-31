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

    void llsum(ListNode* ll, ListNode* &ans, int& carry){

          while(ll!=NULL){
            
            int sum = ll->val + carry;
            
            if(sum>9){
            carry = 1;
            ListNode* temp = new ListNode(sum%10,NULL);
            ans->next = temp; 
            ans = ans->next;
        }

        else{
            carry = 0;
            ListNode* temp = new ListNode(sum,NULL);
            ans->next = temp; 
            ans = ans->next;
        }

            ll=ll->next;
        }


    }


public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        

        ListNode* ans = new ListNode();
        ListNode* result = ans;
        
        int carry = 0;

        while(l1!=NULL && l2!=NULL){



            int sum = l1->val + l2->val + carry;

            if(sum>9){
                carry = 1;
                ListNode* temp = new ListNode(sum%10,NULL);
                ans->next = temp; 
                ans = ans->next;
                cout<<temp->val<<endl;
            }
            else{
                carry = 0;
                ListNode* temp = new ListNode(sum,NULL);
                ans->next = temp; 
                ans = ans->next;
                cout<<temp->val<<endl;
            }

            l1=l1->next;
            l2=l2->next;


        }

        llsum(l1,ans,carry);
        llsum(l2,ans,carry);


        if(carry){
            ListNode* temp = new ListNode(1,NULL);
            ans->next = temp;
            cout<<temp->val<<endl;
        }


    return result->next;
    
    }
};