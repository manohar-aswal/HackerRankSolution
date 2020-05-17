/*
   Remove all duplicate elements from a sorted linked list
   Node is defined as 
   struct Node
   {
   int data;
   struct Node *next;
   }
 */
Node* RemoveDuplicates(Node *head)
{
	Node *ptr1 = head;
	Node *ptr2,*dup;
	if(head == NULL || head->next == NULL)
		return head;

	while(ptr1->next)
	{
		ptr2 = ptr1;
		while(ptr2->next)
		{
			if(ptr1->data == ptr2->next->data)
			{
				dup = ptr2->next;
				ptr2->next = ptr2->next->next;
				delete dup;
			}
			else
				ptr2 = ptr2->next;
		}
		if(ptr1->next != NULL)
			ptr1 = ptr1->next;
	}
	return head;
}

