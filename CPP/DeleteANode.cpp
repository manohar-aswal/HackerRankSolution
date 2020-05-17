/*
   Delete Node at a given position in a linked list 
   Node is defined as 
   struct Node
   {
   int data;
   struct Node *next;
   }
 */
Node* Delete(Node *head, int position)
{
	struct Node *curr = head;
	struct Node *temp = NULL;
	int index = 0;

	if(position == 0)
	{
		temp = curr->next;
		delete head;
		head = temp;
	}
	else
	{
		while(curr)
		{
			if(index == position - 1)
			{
				temp = curr->next;
				curr->next = temp->next;
				delete temp;
				break;
			} 
			curr= curr->next;
			index++;
		}
	}
	return head;
}

