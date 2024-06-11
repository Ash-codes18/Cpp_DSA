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


// Approach-1 : Brute Force -> Using vector to store the LL

// class Solution {
// public:
//     int pairSum(ListNode* head) {
//         int n =0;

//         ListNode* temp = head;
//         vector<int> arr;

//         while(temp!=NULL){
//             n++;
//             arr.push_back(temp->val);
//             temp=temp->next;
//         }

//         map<int,int> mp;
//         int ans = 0;

//         for(int i =0;i<=n/2 - 1;i++){
//             if(n-i-1>i){
//                 mp[i]=n-1-i;
//             }
//         }

//         for(auto i : mp){
//             ans=max(arr[i.first]+arr[i.second],ans);
//         }

//     return ans;


//     }
// };



// Approach 2 -> Creating a separate LL with the twin nodes 


class Solution {

private:
    ListNode* reversell(ListNode* head){
        
        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while(temp!=NULL){
            next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }

        return prev;

    }

public:
    int pairSum(ListNode* head) {
        

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }


        slow = reversell(slow);
        int ans = 0;

        while(slow!=NULL){
            ans=max(head->val+slow->val,ans);
            head=head->next;
            slow=slow->next;
        }


    return ans;


    }
};