/*
   struct node
   {
   int data;
   node* left;
   node* right;
   };

 */

void postOrder(node * root)
{
	if(root == NULL)
		return; 
	postOrder(root->left);
	cout << root->data << " ";
}

void preOrder(node * root)
{
	if(root == NULL)
		return;
	cout << root->data << " ";
	preOrder(root->right);
}

void top_view(node * root)
{
	postOrder(root);
	preOrder(root->right);
}

