/*The tree node has data, left child and right child 
  struct node
  {
  int data;
  node* left;
  node* right;
  };

 */
int height(node * root)
{
	int l = 0,r = 0;
	if(root->left)
		l = 1 + height(root->left);
	if(root->right)
		r = 1 + height(root->right);
	return (l > r ? l : r) ;
}
