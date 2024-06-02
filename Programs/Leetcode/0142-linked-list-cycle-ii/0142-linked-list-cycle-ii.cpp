/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */




// Using Extra Space :


// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
        
//             if(head == NULL){
//                 return NULL;
//             }

//             map<ListNode*,bool> mp;
//             ListNode* temp = head;

            
//             while(temp!=NULL){
//                 if(mp[temp]==true){
//                     return temp;
//                 }
//                 mp[temp]=true;
//                 temp=temp->next;
//             }     

//     return NULL;

//     }
// };



// Without Using extra Space :

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
            if(head == NULL){
                return NULL;
            }

            ListNode* slow = head;
            ListNode* fast = head;
            

            while(fast && fast->next){
                slow=slow->next;
                fast=fast->next->next;
                
                if(slow==fast){
                    slow=head;
                    while(slow!=fast){
                        slow=slow->next;
                        fast=fast->next;
                    }
                    return slow;
                }
            }


    return NULL;

    }
};