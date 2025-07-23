#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*start=NULL,*p,*temp,*end;
void creation();
void delete_beg();
int main(){
	delete_beg();
	}
void creation(){
		int choice;
	choice=1;
	while(choice){
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	int x;
	printf("enter the node data:");
	scanf("%d",&x);
	temp->data=x;
	temp->next=NULL;
	if(start==NULL){
		start=temp;
		start->next=start;
		end=temp;
		p=temp;
	}
	else{
		end->next=temp;
		temp->next=start;
		end=temp;
	}
	printf("enter 1  to insert new node data 0 to stop new node input:");
	scanf("%d",&choice);
}
	printf("resultant data ");
	p=start;
	while(p->next!=start){
		printf("%d",p->data);
		p=p->next;
	}
	printf("%d",p->data);
}
void delete_beg(){
	creation();
	printf("1\n");
	if(start==NULL){
		printf("li is empty");
	}
	else if(start->next=NULL){
		printf("2\n");
		temp=start;
		start=NULL;
		end=NULL;
		temp->next=NULL;
		free(temp);
	}
	else{
		printf("3\n");
		temp=start;
		start=temp->next;
		end->next=start;
		temp->next=NULL;
		free(temp);
		printf("4\n");
	}
	printf("resultant data");
	p=start;
	while(p->next!=start){
		printf("%d",p->data);
		p=p->next;
	}
	printf("%d",p->next);
}
