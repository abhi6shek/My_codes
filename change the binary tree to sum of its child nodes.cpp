//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct bst
//{
//	int data;
//	struct bst *left,*right;
//}bst;
//
//void increament(bst *root, int data)
//{
//	if(root->left!=NULL && root->right==NULL)
//	{
//		root->left->data+=data;
//		increament(root->left,data);
//	}
//	else if(root->right!=NULL && root->left==NULL)
//	{
//		root->right->data+=data;
//		increament(root->right,data);
//	}
//	else if(root->left!=NULL && root->right!=NULL)//additional to equally distribute the weight in two subtrees
//	{
//		root->left->data+=(data/2);
//		root->right->data+=(data/2);
//		increament(root->left,data/2);
//		increament(root->right,data/2);
//	}
//}
//
//void converttree(bst *root)
//{
//	int data=0;
//	if(root==NULL || (root->left==NULL && root->right==NULL))
//	{
//		return;
//	}
//	else
//	{
//		converttree(root->left);
//		converttree(root->right);
//		if(root->left!=NULL)
//			data+=root->left->data;
//		if(root->right!=NULL)
//			data+=root->right->data;
//		if(data>root->data)
//			root->data=data;
//		if(data<root->data)
//			increament(root,root->data-data);
//	}
//}
//
//void print(bst *root)
//{
//	if(root!=NULL)
//	{
//		print(root->left);
//		printf("%d ",root->data);
//		print(root->right);
//	}
//}
//
//void addnode(bst **root,int data)
//{
//	bst *newnode=(bst*)malloc(sizeof(bst));
//	newnode->data=data;
//	newnode->left=NULL;
//	newnode->right=NULL;
//	*root=newnode;
//}
//
//int main()
//{
//	bst *root=NULL;
//	addnode(&root,100);
//	addnode(&root->left,7);
//	addnode(&root->right,2);
//	addnode(&root->left->left,3);
//	addnode(&root->left->right,57);
//	addnode(&root->right->left,1);
//	addnode(&root->right->right,30);
//	print(root);
//	printf("\n");
//	converttree(root);
//	print(root);
//	printf("\n");
//	return 0;
//}