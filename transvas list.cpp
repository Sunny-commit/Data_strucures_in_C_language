#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	int ptr;
		struct node *temp=NULL;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=45;
	temp->next=NULL;
	struct node *node2=NULL;
	node2=(struct node *)malloc(sizeof(struct node));
	node2->data=56;
	node2->next=NULL;
	temp->next=node2;
	//for making more no of nodes we can make it has
	node2=(struct node *)malloc(sizeof(struct node));
	node2->data=3;
	node2->next=NULL;
	temp->next->next=node2;
	if(temp==NULL){
		printf("there is no linked list");
	}
	else{
		struct node *ptr=temp;
		while(ptr!=NULL){
			printf("%d\n",ptr->data);
			ptr=ptr->next;
		}
	}
	
}
