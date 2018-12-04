/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
   int data;
   Node* next;
   }
 */
int FindMergeNode(Node *headA, Node *headB)
{
	Node *nodeB;  
	while(headA)
	{  
		nodeB = headB;  
		while(nodeB)
		{  
			if(nodeB == headA) 
				return nodeB->data;  
			nodeB = nodeB->next;  
		}  
		headA = headA->next;  
	}  
	return headA->data;  
}

