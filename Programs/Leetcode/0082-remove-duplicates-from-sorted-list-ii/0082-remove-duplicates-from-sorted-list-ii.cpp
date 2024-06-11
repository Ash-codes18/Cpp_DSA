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
    ListNode* deleteDuplicates(ListNode* head) {
            if(head==NULL || head->next==NULL){
                return head;
            }

            map<int,bool> mp;

            ListNode* tem = head;

            while(tem!=NULL){
                if(mp.find(tem->val)!=mp.end()){
                    mp[tem->val]=true;
                }
                else{
                    mp[tem->val]=false;
                }
                tem=tem->next;
            }

            ListNode* temp = head;

            
            while(temp->next!=NULL){
                if(temp->val==temp->next->val){
                    temp->next=temp->next->next;
                }
                else{
                    temp=temp->next;
                }
            }

            ListNode* curr = head;
            ListNode* prev = NULL;

            while(curr!=NULL){
                
                if(mp[curr->val]){
                    if(curr==head){
                        head=head->next;
                    }
                    else{
                        prev->next=curr->next;
                    }
                }
                else{
                    prev=curr;
                }
                    curr=curr->next;

            }

            return head;

    }
};