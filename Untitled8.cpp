#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
}*temp,*p,*start=NULL;
void creation();
void sll_insert_end();
int main(){
	int flag,choice;
	flag=1;
	while(flag){
			printf("1.creation\n2.insert_end\n");
			printf("choose the option:\n");
			scanf("%d",&choice);
			switch(choice){
				case 1:
					creation();
					break;
				case 2:
					sll_insert_end();
					break;
					
			}
	}
}
void creation(){
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter new node value to be inserted:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(start==NULL){
		start=temp;
		p=temp;
	}
	else{
		p->link=temp;
		p=temp;
	}
}
void sll_insert_end(){
	printf("enter the data to insert:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(start==NULL){
		start=temp;
	}
	else{
		p=start;
		while(p!=NULL){
			p=p->next;
		}
		p->next=temp;
	}
	traverse();
}
