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



// Approach-1 => With Prev pointer


// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {

//         if(head==NULL || head->next==NULL){
//             return head;
//         }

//         // ListNode* prev = head;
//         // ListNode* cur = head->next;

//         // while(cur!=NULL){
//         //     if(prev->val==cur->val){
//         //         prev->next=cur->next;
//         //         cur=cur->next;
//         //     }
//         //     else{
//         //         prev=cur;
//         //         cur=cur->next;
//         //     }
//         // }

    
// return head;

//     }
// };



// Approach-2 => Without Prev pointer



class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* temp = head;

        while(temp->next!=NULL){
            if(temp->val == temp->next->val){
                temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
            }
        }
    
return head;

    }
};