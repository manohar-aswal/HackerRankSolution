#include <iostream>
#include <cstddef>

using namespace std;	

class Node{
	public:
		int data;
		Node *left,*right;
		Node(int d){
			data=d;
			left=right=NULL;
		}
};

class Solution{
	public:
		Node* insert(Node* root, int data){
			if(root==NULL){
				return new Node(data);
			}
			else{
				Node* cur;
				if(data<=root->data){
					cur=insert(root->left,data);
					root->left=cur;
				}
				else{
					cur=insert(root->right,data);
					root->right=cur;
				}
				return root;
			}
		}
		int getHeight(Node* root){
			int x = 0, y = 0;
			if (root->left)
				x = 1 + getHeight(root->left);
			if (root->right)
				y = 1 + getHeight(root->right);
			return (y > x) ? y : x;
		}
};

int main(){
	Solution myTree;
	Node* root=NULL;
	int T,data;
	cin>>T;
	while(T-->0){
		cin>>data;
		root= myTree.insert(root,data);
	}
	int height= myTree.getHeight(root);
	cout<<height;
	return 0;
}
