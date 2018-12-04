/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
   int data;
   Node *next;
   Node *prev;
   }
 */

Node* Reverse(Node* head)
{
	Node *ptr = head;
	Node *temp = new Node();

	while(ptr)
	{  
		temp->next = ptr->next;  
		temp->prev = ptr->prev;  
		ptr->next = temp->prev;  
		ptr->prev = temp->next;  
		ptr = temp->next;  
		if(ptr)
			head = ptr;  
	}  
	return head;
}

