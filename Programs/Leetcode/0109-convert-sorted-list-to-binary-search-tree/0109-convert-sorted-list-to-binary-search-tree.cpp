class Solution {
private:
    ListNode* getMid(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while(fast && fast->next){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if(prev) prev->next = NULL;

        return slow;
    }

    TreeNode* builder(ListNode* head) {
        if (!head) return NULL;

        ListNode* mid = getMid(head);

        TreeNode* root = new TreeNode(mid->val);

        if (head == mid) return root;

        root->left = builder(head);
        root->right = builder(mid->next);

        return root;
    }

public:
    TreeNode* sortedListToBST(ListNode* head) {
        if (!head) return NULL;
        return builder(head);
    }
};