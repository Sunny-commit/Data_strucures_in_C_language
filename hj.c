#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*front=-1,*rear=-1,*temp,*P;
void enqueue(){
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the data:\n");
	scanf("%d",temp->data);
	temp->next=NULL;
	if(front==NULL){
		front=rear=temp;
	}
	else{
		rear->next=temp;
		rear=temp;
	}
}
void traverse(){
	if(front==NULL){
		printf("no elements:");
	}
	else{
		p=front;
		while(p!=rear){
			printf("%d",p->data);
			p=p->next;
		}
	}
}
void dequeue(){
	if(front==NULL){
		printf("no elements:");
	}
	else{
		temp=front;
		front=front->next;
		temp->next=NNULL;
		free(temp);
	}
}
int main(){
	printf("1.enqueue\n2.dequeue\n3.traverse\n");
	int 
}
