#include<stdio.h>
#include<stdlib.h>
#define max 5
struct node{
	int data;
	struct node *next;
}*temp,*p,*front=-1,*rear=-1;
int q[max],front1=-1;
int rear1=-1;
void enqueue(){
	int x;
	printf("enter the data:");
	scanf("%d",&x);
	if(rear1>=max-1){
		printf("stack is full");
	}
	else{
		rear1=rear1+1;
		q[rear1]=x;
	}
	if(front1==-1){
		front1=0;
	}
}
void dequeue(){
	if(front1==-1){
		printf("no elements in the queues:");
	}
	else if(front1==rear1){
		printf("the deleting element is %d",q[front1]);
		front=rear=-1;
	}
	else{
		printf("the deleting element is %d",q[front1]);
		front1=front1+1;
	}
}
void traverse(){
	if(front1==-1){
		printf("no elements in queues:");
	}
	else{
		int i;
		for(i=front1;i<=rear1;i++){
			printf("%d",q[i]);
		}
	}
}
void enqueue_li(){
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(front==-1){
		front=rear=temp;
	}
	else{
		rear->next=temp;
		rear=temp;
	}
}
void dequeue_li(){
	if(front==-1){
		printf("no elements in queue:");
	}
	else if(front=rear){
		temp=rear;
		rear=NULL;
		front=NULL;
		free(temp);
	}
	else{
		temp=front;
		front=front->next;
		temp->next=NULL;
		free(temp);
	}
	traverse_li();
}
void traverse_li(){
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
int main(){
		int key,flag=1,choice;
	while(flag){
		printf("1.enqueue\n2.dequeue\n3.traverse\n4.enqueue_li\n5.dequeue_li\n6.traverse_li\n");
		printf("enter the choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				traverse();
				break;
			case 4:
				enqueue_li();
				break;
			case 5:
				dequeue_li();
				break;
			case 6:
				traverse_li();
				break;
		}
		printf("for further (1/0)");
		scanf("%d",&flag);
}
}

