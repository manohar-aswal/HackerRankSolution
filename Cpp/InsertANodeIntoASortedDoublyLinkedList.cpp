/*
   Insert Node in a doubly sorted linked list 
   After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
   int data;
   Node *next;
   Node *prev;
   }
 */

Node* SortedInsert(Node *head,int data)
{
	Node *temp = new Node();
	temp->data = data; 

	if (head == NULL) 
	{
		return temp;;
	}
	else if (data <= head->data) 
	{
		temp->next = head;
		head->prev = temp;
		return temp;
	}
	else 
	{
		Node *rest = SortedInsert(head->next, data);
		head->next = rest;
		rest->prev = head;
		return head;
	} 
}

