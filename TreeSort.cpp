#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
}BITree;
void PreOrder(BITree *root)
{
	if(root==NULL) return ;
	cout << root->data <<" ";
	PreOrder(root->left);
	PreOrder(root->right);
}
void InOrder(BITree *root)
{
	if(root==NULL) return ;
	InOrder(root->left);
	cout << root->data <<" ";
	InOrder(root->right);
}
void PostOrder(BITree *root)
{
	if(root==NULL) return ;
	PostOrder(root->left);
	PostOrder(root->right);
	cout << root->data <<" ";
}
Node  *CreateTree(BITree *root,Node *p)
{
	if(root==NULL)	return p;
	if(p->data > root->data)
		root->right=CreateTree(root->right,p);
	else if(p->data < root->data)
		root->left=CreateTree(root->left,p); 	
	return root;
}

int main()
{
	BITree *root=NULL;
	int n,i,x;
	cin >> n;
	for(i=0;i<n;++i)
	{
		BITree *p=(BITree *)malloc(sizeof(BITree));
		p->left=p->right=NULL;
		cin >> p->data;
		root=CreateTree(root,p);
	}

	PreOrder(root);
	cout <<endl;
	InOrder(root);
	cout <<endl;
	PostOrder(root);
	
 } 
