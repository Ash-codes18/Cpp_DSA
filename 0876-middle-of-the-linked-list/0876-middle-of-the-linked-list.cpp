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

 /*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        int size=0;
        ListNode* temp = head;

        while(temp!=NULL){
            temp=temp->next;
            size++;
        }

        int mid=(size/2)+1;

        int count=1;

        while(count!=mid){
            head=head->next;
            count++;
        }

        return head;
        
    }
};

*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        if(head==NULL || head->next == NULL){
            return head;
        }

       ListNode* sp = head;
       ListNode* fp = head->next;
        

        while(fp!=NULL){
            fp=fp->next;
            if(fp!=NULL){
                fp=fp->next;
            }
            sp=sp->next;
        }

        return sp;

    }
};