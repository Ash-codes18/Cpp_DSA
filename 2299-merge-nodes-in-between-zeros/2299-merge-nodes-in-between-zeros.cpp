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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* fz = NULL, *sz  = NULL, *temp = head;

        while(temp!=NULL){
            if(temp->val==0){
                if(!fz){
                    fz=temp;
                }
                else{
                    ListNode* bg = fz;
                    int sum = 0;
                    while(fz!=temp){
                        fz=fz->next;
                        sum+=fz->val;
                    }
                    bg->next->val = sum;
                    bg->next->next = temp;
                    fz=temp;
                }
            }
            temp=temp->next;
        }

        head=head->next;
        temp = head;
        ListNode *prev = NULL;

        while(temp!=NULL){
            if(temp->val==0){
                prev->next = temp->next;
            }
            else{
                prev = temp;
            }
            temp=temp->next;
        }
        


        return head;

    }
};