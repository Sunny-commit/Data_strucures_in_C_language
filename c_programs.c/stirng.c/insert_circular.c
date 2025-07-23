#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*start=NULL,*temp,*p,*end;
void creation();
void insert_beg();
void insert_end();
void insert_spef();
//void delete_beg();
//void delete_end();
int main(){
	int choose;
	printf("1.creation\n2.insert_beg\n3.insert_end\n4.insert_spef\n5.delete_beg\n6.insert_end");
	scanf("%d",&choose);
	switch(choose){
		case 1:
			creation();
			break;
		case 2:
			insert_beg();
			break;
		case 3:
			insert_end();
			break;
		case 4:
			insert_spef();
			break;
//		case 5:
//			delete_beg();
//			break;
//		case 6:
//			delete_end();
//			break;
			
	}
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
void insert_beg(){
	creation();
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	int x;
	printf("enter the new node to insert");
	scanf("%d",&x);
	temp->data=x;
	temp->next=NULL;
	if(start==NULL){
		start=temp;
		end=temp;
		start->next=start;
	}
	else{
		temp->next=start;
		start=temp;
		end->next=start;
		
	}
	printf("resultant data:");
	p=start;
	while(p->next!=start){
		printf("%d",p->data);
		p=p->next;
	}
	printf("%d",p->data);
}
void insert_end(){
	creation();
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	printf("enter a node to place at end:");
	int x;
	scanf("%d",&x);
	temp->data=x;
	temp->next=NULL;
	if(start==NULL){
		start=temp;
		start->next=start;
		end=temp;
	}
	else{
		p=start;
		while(p->next!=start){
			p=p->next;
		}
		p->next=temp;
		temp->next=start;
		end=temp;
	}
	printf("resultant data ");
	p=start;
	while(p->next!=start){
		printf("%d",p->data);
		p=p->next;
	}
	printf("%d",p->data);
}
void insert_spef(){
	creation();
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	int x,count=0,k,pos;
	printf("enter the inserting node data:");
	scanf("%d",&x);
	temp->data=x;
	temp->next=NULL;
	printf("1\n");
	if(start==NULL){
		
		struct node *temp=(struct node *)malloc(sizeof(struct node));
	int x,count=0,k,pos;
	printf("enter the inserting node data:");
	scanf("%d",&x);
	temp->data=x;
	temp->next=NULL;
		start=temp;
		start->next=start;
		end->next=start;
	}
	else{
		printf("2\n");
		p=start;
		while(p!=start){
			count=count+1;
			p=p->next;
		}
		}
		printf("enter pos to insert:");
		scanf("%d",&pos);
	if(pos>0 && pos<=count+1){
		if(pos==1){
			insert_beg();
		}
		else if(pos==count+1){
			insert_end();
		}
		else{
			printf("1\n");
			for(k=1;k<pos-1;k++){
				p=p->next;
				printf("1\n");
			}
			temp->next=p->next;
			p->next=temp;
			}
		}
		else{
			printf("entered invalided position:");
		}
		printf("resultant data:");
		p=start;
		while(p->next!=start){
			printf("%d",p->data);
			p=p->next;
		}
		printf("%d",p->data);
	}
