#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
}*root=NULL,*temp,*p;
struct node *new_node(int key){
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=key;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
struct node *insert_bst(struct node *root,int key){
	if(root==NULL){
		return new_node(key);
	}
	else if(key<root->data){
		root->left=insert_bst(root->left,key);
	}
	else{
		root->right=insert_bst(root->right,key);
	}
	return root;
}
struct node *min(struct node *root){
	p=root;
	while(p!=NULL && p->left!=NULL){
		p=p->left;
	}
	return p;
}
struct node *delete_bst(struct node *root,int key){
	if(root==NULL){
		return root;
	}
	if(key<root->left){
		root->left=delete_bst(root->left,key);
	}
	else if{
		root->right=delete_bst(root->right,key);
	}
	else{
		if(root->left==NULL){
			temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL){
			temp=root->left;
			free(root);
			return temp;
		}
		else{
			temp=min(root->right);
			root->data=temp->data;
			root->right=delete_bst(root->right,temp->data);
		}
	}
	return root;
}
