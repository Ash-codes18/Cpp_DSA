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

// Approach - 1 -> Without Using dummy node 

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        
        head=head->next;
        ListNode *start = head, *temp = head;
        int sum = 0;

        while(temp){
            if(temp->val!=0){
                sum+=temp->val;
            }
            else{
                start->val = sum;
                start->next = temp->next;
                start = temp->next;
                sum = 0;
            }
            temp=temp->next;
        }

        ios::sync_with_stdio(0);
        cin.tie(0);

        return head;

    }
};


// Approach-2 -> Using Dummmy Node

// class Solution {
// public:
//     ListNode* mergeNodes(ListNode* head) {
        
//         ListNode *ans = new ListNode();
//         ListNode *temp = head->next, *res = ans;
//         int sum = 0;

//         while(temp){
//             if(temp->val!=0){
//                 sum+=temp->val;
//             }
//             else{
//                 ListNode *dummy = new ListNode(sum);
//                 res->next=dummy;
//                 res=res->next;
//                 sum=0;
//             }
//             temp=temp->next;
//         }

//         return ans->next;

//     }
// };
