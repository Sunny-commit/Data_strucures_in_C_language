#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *pre;
	int x;
	struct node *next;
}*start=NULL,*p,*temp,*end;
void dll_creation();
void traverse();
void dll_insert();
void insert_end();
void dll_delete();
int main(){
	int flag,choice;
	flag=1;
	while(flag){
		printf("1.creation\n2.traverse\n3.insert_beg\n4.insert_end\n5.delete_beg\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				dll_creation();
				break;
			case 2:
				traverse();
				break;
			case 3:
				dll_insert();
				break;
			case 4:
				insert_end();
				break;
			case 5:
				dll_delete();
				break;
		}
		printf("enter 1/0 for further:\n");
		scanf("%d",&flag);
	}
}
void dll_creation(){
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&temp->x);
	temp->next=NULL;
	temp->pre=NULL;
	if(start==NULL){
		start=temp;
		end=temp;
	}
	else if(start->next==NULL){
		start->next=temp;
		temp->pre=end;	
	}
}
void traverse(){
	if(start==NULL){
		printf("no linked list elements:");
	}
	else{
		p=start;
		while(p!=NULL){
			printf("%d",p->x);
			p=p->next;
		}
	}
}
void dll_insert(){
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the data to insert:");
	scanf("%d",&temp->x);
	temp->next=NULL;
	temp->pre=NULL;
	if(start==NULL){
		start=temp;
		end=temp;
	}
//	else if(start->next==NULL){
//		start->next=temp;
//		temp->pre=end;
//		end=temp;
//	}
	else{
		temp->next=start;
		start->pre=temp;
		start=temp;
	}
	traverse();
}
void insert_end(){
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&temp->x);
	temp->next=NULL;
	temp->pre=NULL;
	if(start==NULL){
		start=temp;
		end=temp;
	}
	else if(start->next==NULL){
		start->next=temp;
		temp->pre=start;
		end=temp;
	}
	else{
		p=start;
		while(p!=NULL){
			p=p->next;
		}
		end->next=temp;
		temp->pre=end->next;
		temp->next=NULL;
		end=temp;	
	}
	traverse();
}
void dll_delete(){
	if(start==NULL){
		printf("no linked list elements:");
	}
	else if(start->next==NULL){
		temp=start;
		start->next=NULL;
		temp->next=NULL;
		temp->pre=NULL;
		free(temp);
	}
	else{
		temp=start;
		start=start->next;
		temp->next=NULL;
		temp->pre=NULL;
		free(temp);
}
traverse(); 
}


