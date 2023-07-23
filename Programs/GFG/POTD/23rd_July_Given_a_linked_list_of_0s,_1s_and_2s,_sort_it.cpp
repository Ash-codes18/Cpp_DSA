/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
public:
    //Function to sort a linked list of 0s, 1s, and 2s.
    Node* segregate(Node *head) {
        if (!head || !head->next) {
            return head;
        }

        Node* zero_head = new Node(0);
        Node* one_head = new Node(0);
        Node* two_head = new Node(0);
        Node* zero_tail = zero_head;
        Node* one_tail = one_head;
        Node* two_tail = two_head;

        Node* current = head;
        while (current) {
            if (current->data == 0) {
                zero_tail->next = current;
                zero_tail = zero_tail->next;
            } else if (current->data == 1) {
                one_tail->next = current;
                one_tail = one_tail->next;
            } else {
                two_tail->next = current;
                two_tail = two_tail->next;
            }
            current = current->next;
        }

        zero_tail->next = one_head->next ? one_head->next : two_head->next;
        one_tail->next = two_head->next;
        two_tail->next = nullptr;

        head = zero_head->next;
        delete zero_head;
        delete one_head;
        delete two_head;

        return head;
    }
};