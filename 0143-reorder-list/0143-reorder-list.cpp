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
    void reorderList(ListNode* head) {
        
        if(!head || !head->next || !head->next->next){
            return;
        }

        stack<ListNode*> st;


        ListNode* fp = head->next; 
        ListNode* sp = head; 
    
        while(fp && fp->next){
            sp=sp->next;
            fp=fp->next->next;
        }

        while(sp){
            st.push(sp);
            sp=sp->next;
        }


        ListNode* temp = head;
        ListNode* prev = NULL;

        while(!st.empty() && temp){

            if(temp==st.top()){
                break;
            }

            prev = temp->next;
            temp->next = st.top();
            st.top()->next = prev;
            temp = prev;
            st.pop();
        }

        temp->next = NULL;


    }
};