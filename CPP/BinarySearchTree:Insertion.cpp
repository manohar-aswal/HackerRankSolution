/*
   Node is defined as 

   typedef struct node
   {
   int data;
   node * left;
   node * right;
   }node;

 */


node * insert(node * root, int value)
{
	if(root==NULL)
	{
		node *temp = new node;
		temp->data = value;
		temp->left = NULL;
		temp->right = NULL;
		return temp;
	}
	else
	{
		node* cur;
		if(value <= root->data)
		{
			cur=insert(root->left,value);
			root->left=cur;
		}
		else
		{
			cur=insert(root->right,value);
			root->right=cur;
		}
		return root;
	}
}

