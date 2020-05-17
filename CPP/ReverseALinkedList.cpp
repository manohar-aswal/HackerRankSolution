/*
   Reverse a linked list and return pointer to the head
   The input list will have at least one element  
   Node is defined as 
   struct Node
   {
   int data;
   struct Node *next;
   }
 */
Node* Reverse(Node *head)
{
	struct Node* prev   = NULL;
	struct Node* current = head;
	struct Node* next;
	while (current != NULL)
	{
		next  = current->next;  
		current->next = prev;   
		prev = current;
		current = next;
	}
	head = prev;
	return head;
}

