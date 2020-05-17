/*
   Detect loop in a linked list 
   List could be empty also
   Node is defined as 
   struct Node
   {
   int data;
   struct Node *next;
   }
 */
int HasCycle(Node* head)
{
	Node *slow = head,*fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			return 1;
	}
	return 0;
}

