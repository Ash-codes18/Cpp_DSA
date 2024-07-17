class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        
        ios::sync_with_stdio(0);
        cin.tie(0);

        ListNode* prev  = NULL;
        ListNode* curr  = head;
        ListNode* next  = NULL;

        unordered_map<int,bool> mp;
        for(int i : nums) mp[i] = true;;

        while(curr){ 
            if(mp[curr->val]){
                if(curr==head){
                    head=head->next;
                    curr=head;
                }
                else{
                    next = curr->next;
                    if(prev)prev->next = next;
                    curr->next = NULL;
                    curr=next;
                }
            }
            else{
                prev = curr;
                curr=curr->next;
            }
        }

        return head;

    }
};