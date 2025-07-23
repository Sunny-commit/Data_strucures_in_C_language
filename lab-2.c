#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*start=NULL,*temp,*p;
void newnode();
void traverse();
int main(){
	int choice;
	printf("enter 1creation2.traverse");
	switch(choice){
		case1:
			newnode();
			break;
		case2:
			traverse();
			break;
	}
}
void newnode(){
	*temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the node data:");
	int x;
	scanf("%d",&x);
	temp->data=x;
	temp->next;
	if(start==NULL){
		start=temp;
		p=temp;
	}
	else{
		p->next=temp;
		p=temp;
	}
}
void traverse(){
	newnode();
	if(start==NULL){
		printf("li is empty:");
	}
	else{
		p=start;
		while(p!=NULL){
			printf("%d",p->data);
			p=p->next;
		}
	}
}
