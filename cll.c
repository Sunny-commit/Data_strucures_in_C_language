#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*temp,*p,*start=NULL,*end=NULL;
void cll_creation();
void traverse();
int main(){
		int key,flag=1,choice;
	while(flag){
		printf("1.creation of s_ll\n2.traverse\n3.sll_insertion\n4.sll_inserte\n5.sll_insert_pos\n6.sll_delete\n7.sll_delete_end\n8.delete_pos\n9.search;");
		printf("enter the choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				s_ll();
				break;
			case 2:
				traverse();
				break;
			default:
				printf("enter the valid choice:");
				break;
}
printf("for further (1/0)");
		scanf("%d",&flag);
}
}
void cll_creation(){
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(start==NULL){
		start=temp;
		end=temp;
		start->next=start;
	}
	else{
		end->next=temp;
		temp->next=start;
		end=temp;	
	}
}
void traverse(){
	if(start==NULL){
		printf("linked list is empty");
	}
	else{
		p=start;
		while(p!=start){
			printf("%d",p->data);
			p=p->next;
		}
	}
}
