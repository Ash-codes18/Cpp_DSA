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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        vector<int> ans(2,-1);
        if(!head->next->next) return ans;
    
        ListNode *next = head->next->next, *curr = head->next, *prev = head;
        int mind = INT_MAX, maxd = INT_MIN, f = 0, l = 0, count = 1;

        while(next){
            if((prev->val < curr->val && curr->val > next->val) || (prev->val > curr->val && curr->val < next->val)){
                if(f && !l) l = count, mind = count-f;
                else if(f && l) mind = min(mind,count-l), l = count;

                if(!f) f=count;
                else maxd = max(maxd,count-f);
            }
                
            count++;
            prev=curr;
            curr=next;
            next=next->next;
        }

        if(f && l) ans[0]=mind,ans[1]=maxd;

return ans;
    }
};