
/*
The structure of linked list is the following

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
    //Function to remove duplicates from unsorted linked list.
    Node* removeDuplicates(Node *head) 
    {
        if (!head)
            return nullptr;

        std::unordered_set<int> seen;
        Node* current = head;
        seen.insert(current->data);

        while (current->next) {
            if (seen.find(current->next->data) != seen.end()) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
            } else {
                seen.insert(current->next->data);
                current = current->next;
            }
        }

        return head;
    }
};
