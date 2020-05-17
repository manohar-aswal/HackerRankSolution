#include <queue>

/*
   struct node
   {
   int data;
   node* left;
   node* right;
   }*/

void LevelOrder(node * root) 
{
	if(root == NULL)
		return;

	queue<node *> q;

	q.push(root);

	while(q.empty() == false)
	{
		node *Node = q.front();
		cout << Node->data << " ";
		q.pop();

		if(Node->left != NULL)
			q.push(Node->left);

		if (Node->right != NULL)
			q.push(Node->right);
	}
}

