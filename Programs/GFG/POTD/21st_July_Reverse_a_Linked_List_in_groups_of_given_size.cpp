/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
public:
    struct node* reverse(struct node* head, int k)
    {
        struct node* prev = NULL;
        struct node* current = head;
        struct node* next_node = NULL;
        int count = 0;

        // Reverse k nodes
        while (current != NULL && count < k)
        {
            next_node = current->next;
            current->next = prev;
            prev = current;
            current = next_node;
            count++;
        }

        // If there are remaining nodes, recursively reverse them
        if (next_node != NULL)
        {
            head->next = reverse(next_node, k);
        }

        return prev;
    }
};
