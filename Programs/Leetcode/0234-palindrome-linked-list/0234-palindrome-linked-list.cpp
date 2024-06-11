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
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {

//         if(head==NULL || head->next==NULL){
//             return true;
//         }

//         ListNode* temp = head;
//         vector<int> arr1;

//         while(temp!=NULL){
//             arr1.push_back(temp->val);
//             temp=temp->next;
//         }

//         vector<int> arr2=arr1;
//         reverse(arr2.begin(),arr2.end());


//         if(arr1==arr2){
//             return true;
//         }


// return false;

//     }
// };

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
    bool isPalindrome(ListNode* head) {

        if(head==NULL || head->next==NULL){
            return true;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }


        slow = reversell(slow);

        while(slow!=NULL){
            if(slow->val!=head->val){
                return false;
            }
            slow=slow->next;
            head=head->next;
        }
    

        
        return true;


    }
};

