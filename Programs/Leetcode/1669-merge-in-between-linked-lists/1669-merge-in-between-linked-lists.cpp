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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        int count = 1;

        ListNode* l = list2;
        

        while(l->next!=NULL){
            l=l->next;
        }

        ListNode* temp = list1;
        ListNode* p1 = NULL;
        ListNode* p2 = NULL;

        while(temp!=NULL){
            if(count==a){
                p1 = temp;
            }
            if(count==b+1){
                p2 = temp;
                break;
            }
            temp=temp->next;
            count++;
        }


        p1->next = list2;
        l->next = p2->next;



        return list1;


    }
};