#include<stdio.h>
#include<stdlib.h>
# define Max 5
//int Q[Max],front=-1,rear=-1;
//void enqueue(){
//	printf("enter the data to strore in queue");
//	int x;
//	scanf("%d",&x);
//	if(rear>=Max-1){
//		printf("queue is overflow");
//	}
//	else{
//		rear=rear+1;
//		Q[rear]=x;
//	}
//	if(front==-1){
//		front=0;
//	}
//	//traverse();
//}
//void dequeue(){
//	if(front==-1){
//		printf("queue is empty");
//	}
//	else{
//		if(front==rear){
//			printf("deleting element %d",Q[front]);
//			front=front-1;
//		}
//		else{
//			printf("deleting element%d",Q[front]);
//			front=front+1;
//		}
//	}
//}
//void traverse(){
//	if(front==-1){
//		printf("queue is empty");
//	}
//	else{
//		int i;
//		for(i=front;i<=rear;i++){
//			printf("%d",Q[i]);
//		}
//	}
//	//traverse();
//}
//int main(){1
//	int choice=1;
//	while(choice){
//		printf("1)enqueue\n2)dequeue\n3)traverse");
//		int choose_op;
//		printf("\nenter the operator");
//		scanf("%d",&choose_op);
//		switch(choose_op){
//			case 1:
//				enqueue();
//				break;
//			case 2:
//				dequeue();
//				break;
//			case 3:
//				traverse();
//				break;
//	}
//	}
//	printf("enter 1 to continue or 0 to stop (1/0)");
//	scanf("%d",&choice);
//	}
struct node{
	int data;
	struct node *next;
}*front=NULL,*temp,*rear=NULL,*p;
void enqueue();
void dequeue();
void traverse();
int main(){
	int choice;
	choice=1;
	while(choice){
		printf("\n1)enqueue\n2)dequeue\n3)traverse");
		int choice_op;
		printf("\nenter the operator");
		scanf("%d",&choice_op);
		switch(choice_op){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				traverse();
				break;
		}
			printf("enter 1 to continue or 0 stop(1/0)");
	scanf("%d",&choice);
	}
}
void enqueue(){
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the data to be inserted in queue");
	int x;
	scanf("%d",&x);
	temp->data=x;
	temp->next=NULL;
	if(front==NULL){
		front=rear=temp;
	}
	else{
		rear->next=temp;
		rear=temp;
	}
	 traverse();
}
void dequeue(){
	if(front==NULL){
		printf("queue is empty");
	}
	else{
		temp=front;
		front=front->next;
		temp->next=NULL;
		free(temp);
	}
	 traverse();
}
void traverse(){
	if(front==NULL){
		printf("queue is empty");
	}
	else{
		 p=front;
		while(p!=rear){
			printf("%d",p->data);
			p=p->next;
		}
	printf("%d",p->data);
	}
}
