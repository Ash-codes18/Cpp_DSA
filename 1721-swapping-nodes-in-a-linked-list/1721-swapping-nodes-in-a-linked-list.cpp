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
    ListNode* swapNodes(ListNode* head, int k) {
        
        if(head->next==NULL){
            return head;
        }
        
        vector<int> arr;
        ListNode* temp = head;


        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;
        }

        swap(arr[k-1],arr[arr.size()-k]);

  
        temp = head;

        for(int i : arr){
            temp->val = i;
            temp=temp->next;
        }


        return head;

        
    }
};