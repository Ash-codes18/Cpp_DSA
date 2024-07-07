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
    int numComponents(ListNode* head, vector<int>& nums) {
       
        ios::sync_with_stdio(0);
        cin.tie(0);
        
        map<int,bool> mp;
        for(int i : nums) mp[i]=true;
        ListNode* temp = head;
        int ans = 0;

        while(temp){
            if(temp->next && mp[temp->val] && !mp[temp->next->val]){
                mp[temp->val] = false;
                ans++;
            }

            else if(!temp->next && mp[temp->val]){
                ans++;
            }   

            temp=temp->next;
        }

return ans;

    }
};