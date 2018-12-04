/*
   Get Nth element from the end in a linked list of integers
   Number of elements in the list will always be greater than N.
   Node is defined as 
   struct Node
   {
   int data;
   struct Node *next;
   }
 */
int GetNode(Node *head,int positionFromTail)
{
	int index = 0;
	Node* curr = head;
	Node* out = head;
	while(curr != NULL)
	{
		curr = curr->next;
		if (index++ > positionFromTail)
		{
			out = out->next;
		}
	}
	return out->data; 
}
