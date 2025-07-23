#include<stdio.h>
#include<stdlib.h>

struct node{
 struct node* left;
 int data;
 struct node* right;
}*root=NULL,*temp,*p;

struct node* newNode(int key){
 temp=(struct node*)malloc(sizeof(struct node));
 temp->left=NULL;
 temp->data=key;
 temp->right=NULL;
 return temp;
}

struct node* insertBST(struct node* root,int key){
 if(root==NULL)
   return newNode(key);
if(key < root->data)
   root->left=insertBST(root->left,key);
else
  root->right=insertBST(root->right,key);
 return root;
}

struct node* minValue(struct node* root){
 p=root;
 while(p!=NULL && p->left!=NULL){
  p=p->left;   
   }
 return p;
 }

struct node* deletionBST(struct node* root,int key){
  if(root==NULL){
   return root;
   }
  if(key < root->data)
    root->left=deletionBST(root->left,key);
 else if(key > root->data)
    root->right=deletionBST(root->right,key);
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
    temp=minValue(root->right);
    root->data=temp->data;
    root->right=deletionBST(root->right,temp->data);
  } 
 }  
  return root;
}

void inorder(struct node* root){
 if(root!=NULL){
  inorder(root->left);
  printf("%d ",root->data);
  inorder(root->right);
 }
}

void preorder(struct node* root){
 if(root!=NULL){
  printf("%d ",root->data);
  preorder(root->left); 
  preorder(root->right);
  }
 }
 
void postorder(struct node* root){
 if(root!=NULL){
  postorder(root->left);
  postorder(root->right);
  printf("%d ",root->data);
  }
 } 

int numOfNodes(struct node* root){
  if(root==NULL)
   return 0;
  else
   return numOfNodes(root->left)+numOfNodes(root->right)+1;  
}

int numOfINodes(struct node* root){
  if(root==NULL)
   return 0;
  if(root->left==NULL && root->right==NULL)
    return 0;
  else
   return numOfINodes(root->left)+numOfINodes(root->right)+1;  
}

int numOfENodes(struct node* root){
  if(root==NULL)
   return 0;
  if(root->left==NULL && root->right==NULL)
    return 1;
  else
   return numOfENodes(root->left)+numOfENodes(root->right); 
}

int heightBst(struct node* root){
 int l,r;
  if(root==NULL)
   return 0;
  else{
    l=heightBst(root->left); 
    r=heightBst(root->right);
    if(l<r)
      return r+1;
    else
      return l+1;
  }
}
   
void main(){  
int flag=1,count,choice,key;
 while(flag){
 printf("\nEnter\n1.For Insertion\n2.for Deletion\nTraversal..\n3.for Inorder\n4.for Preorder\n5.for Postorder\nNO.OF..\n6.for no.of nodes in Bst\n7.for no.of internalNodes\n8.for no.of externalNodes\n9.for height of Bst");
 printf("\nEnter ur choice :");
 scanf("%d",&choice);
 switch(choice){
   case 1:printf("Enter the Value u want to insert in Binary Tree:");
          scanf("%d",&key);
          root=insertBST(root,key);
          break;
   case 2:printf("Enter the Value u want to Delete from Binary Tree:");
          scanf("%d",&key);
          root=deletionBST(root,key);
          break;
   case 3:inorder(root);
          break;  
   case 4:preorder(root);
          break;  
   case 5:postorder(root);
          break;
   case 6:count=numOfNodes(root);
          printf("The no of nodes in BST: %d\n",count);
          break;        
   case 7:count=numOfINodes(root);
          printf("The no of Internal nodes in BST: %d\n",count);
          break;    
   case 8:count=numOfENodes(root);
          printf("The no of External nodes in BST: %d\n",count);
          break;   
   case 9:count=heightBst(root);
          printf("The height of BST: %d\n",count);
          break;                                   
   default:printf("Please,Enter proper Choice!!..\n ");        
  }
 printf("\nenter 1 for further operations : ");
 scanf("%d",&flag);
 }
}
