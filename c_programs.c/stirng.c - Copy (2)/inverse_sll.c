#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*start=NULL,*p,*temp,*p1,*p2,*p3;
int main(){
	int choice;
	choice =1;
	while(choice){
		int x;
		struct node *temp=(struct node *)malloc(sizeof(struct node));
		printf("enter the new node data:");
		scanf("%d",&x);
		temp->data=x;
		temp->next=NULL;
		if(start==NULL){
			start=temp;
			p=temp;
		}
		else{
			p->next=temp;
			p=temp;
		}
		printf("enter 1 to insert 0 to stop:");
		scanf("%d",&choice);
	}
	printf("resultant data:");
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
	if(start->next==NULL){
		printf("there is only one li");
	}
	else{
		p1=start;
		p2=p1->next;
		p3=p2->next;
		p2->next=p1;
		p1->next=NULL;
		while(p3!=NULL){
			p1=p2;
			p2=p3;
			p3=p2->next;
			p2->next=p1;
			
		}
		start=p2;
		
	}
	printf("resultant data:");
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
}
