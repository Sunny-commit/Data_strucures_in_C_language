#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*start=NULL,*temp,*p,*end;
void creation();
void delete_node();
int main(){
	printf("1.creation\n2.delete_node");
	int choose;
	switch(choose){
		case 1:
			creation();
			break;
		case 2:
			delete_node();
			break;
	}
}
void creation(){
	int choice;
	choice=1;
	while(choice){
		temp=(struct node *)malloc(sizeof(struct node));
		int x;
		printf("enter data:");
		scanf("%x",&x);
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
		printf("enter 1 to insert new node and 0 to stop:");
		scanf("%d",&choice);
	}
	printf("resultant data:");
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
}
void delete_node(){
	creation();
	int y;
	printf("enter the element to delete:");
	scanf("%d",&y);
	if(start==NULL){
		printf("li is empty");
	}
	else{
		p=start;
	while(p!=NULL){
	if(p->next->data==y){
		temp=p->next;
		p->next=temp->next;
		temp->next=NULL;
		free(temp);
	}
	else{
		p=p->next;
	}
}
}
	printf("resultant data:");
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
}
