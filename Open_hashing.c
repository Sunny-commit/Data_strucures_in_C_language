//open Hashing
#include<stdio.h>
#include<stdlib.h>
#define SIZE 6

struct node{
  int data;
  struct node *next;
}*temp=NULL,*p,*a[SIZE];

int key=1,value,choice,hkey;

void traversal(){
 int count=0;
 int i;
  for(i=0;i<SIZE;i++){
    p=a[i]; 
    if(p==NULL){
      count++; }
  else if(p!=NULL){
     if(p->next==NULL)
       printf("%d",p->data); 
       printf("\n");
   }
  else{
  while(p->next!=NULL){
    printf("%d -> ",p->data);
    p=p->next; 
    }
    printf("%d ",p->data); 
    printf("\n"); }  
  }
  if(count==SIZE)
    printf("The Hash Table is empty\n");
 }

void insertOH(int value){
 temp=malloc(sizeof(struct node*));
 temp->data=value;
 temp->next=NULL;
 hkey = value%SIZE;
 if(a[hkey]==NULL)
  a[hkey]=temp;
 else{
  p=a[hkey];
  while(p->next!=NULL){
    p=p->next; }
 p->next=temp;
  } 
  traversal(); 
}

void deleteOH(int value){
 int flag=0;
  hkey = value%SIZE;
   p=a[hkey];
  if (p==NULL) {
        printf("The element is not found\n");
        traversal();
        return;
    }
  if(p->data==value){
    temp=p; 
    a[hkey]=p->next;
    temp->next=NULL;
    free(temp);
  }  
  else{
    while(p->next!=NULL){
      if(p->next->data==value){
        temp=p->next;
        p->next=temp->next;
        temp->next=NULL;
        free(temp);
        break;
      }
   }
 }
 traversal();
} 

void main(){
	int i;
 for(i=0;i<SIZE;i++){
   a[i]=NULL;
 }
 while(key){
 printf("Open hashing..\nEnter\n1.For insertion\n2.for deletion\n3.for traversal\n");
 printf("Enter ur choice :");
 scanf("%d",&choice);
 switch(choice){
   case 1:printf("Enter the Value u want to Insert to the HashTable: ");
          scanf("%d",&value);
          insertOH(value);
          break;
   case 2:printf("Enter the Value u want to Delete from the HashTable: ");
          scanf("%d",&value);
          deleteOH(value);
          break;
   case 3: traversal();
          break;         
   default:printf("Please,Enter proper Choice!!.. ");
          
  }
 printf("enter 1 for further operations : ");
 scanf("%d",&key);
 }
}
