class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = 0;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            n++;
        }

        vector<ListNode*> ans;

        if(k>n){
            ListNode* temp;
            while(k--){
                if(head){
                    temp = new ListNode(head->val);
                    head = head->next;
                    ans.push_back(temp);
                }
                else{
                    ans.push_back(NULL);
                }
            }
        }

        else{
            int s = n/k;
            int rem = n%k;
            while(k--){
                ListNode* t = new ListNode();
                ListNode* curr = t;
                if(rem>0){
                    for(int i=0;i<s+1;i++){
                        ListNode *temp = new ListNode(head->val);
                        t->next = temp;
                        t = t->next;
                        head = head->next;
                    }   
                    ans.push_back(curr->next);
                    rem--;
                }
                else{
                    for(int i=0;i<s;i++){
                        ListNode *temp = new ListNode(head->val);
                        t->next = temp;
                        t = t->next;
                        head = head->next;
                    }   
                    ans.push_back(curr->next);
                }
            }
        }

        
        return ans; 
    }
};