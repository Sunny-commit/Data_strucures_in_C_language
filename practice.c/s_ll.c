#include<stdio.h>
#include<stdlib.h>
//creation of single linked list
struct node{
int data;
struct node *next;
}*temp=NULL,*p,*start=NULL;
void s_ll();
void traverse();
void sll_insert();
void sll_inserte();
void sll_insert_pos();
void sll_delete();
void sll_dle_last();
void sll_delete_pos();
void search();
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
			case 3:
				sll_insert();
				break;
			case 4:
				sll_inserte();
				break;
			case 5:
				sll_insert_pos();
				break;
			case 6:
				sll_delete();
				break;
			case 7:
				sll_dle_last();
				break;
			case 8:
				sll_delete_pos();
				break;
			case 9:
				search();
				break;
			default:
				printf("enter the valid choice:");
				break;
		}
		printf("for further (1/0)");
		scanf("%d",&flag);
}
}
void s_ll(){
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the data to be inserted:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(start==NULL){
		start=temp;
		p=temp;
	}
	else{
		p->next=temp;
		p=temp;
	}
//	traverse();
}
void traverse(){
	if(start==NULL){
		printf("linked list is empty:");
	}
	else{
		p=start;
		while(p!=NULL){
			printf("%d\n",p->data);
			p=p->next;
		}
	}
}
void sll_insert(){
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the data to be inserted:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(start==NULL){
		start=temp;
	}
	else if(start->next==NULL){
		start->next=temp->data;
	}
	else{
		temp->next=start;
		start=temp;	
	}
	traverse();
}
void sll_inserte(){
	temp=(struct node *)malloc(sizeof(struct node *));
	printf("enter the data to inserted:\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(start==NULL){
		start=temp->data;
	}
	else{
		p=start;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=temp;
	}
	traverse();
}
void sll_insert_pos(){
	temp=(struct node *)malloc(sizeof(struct node));
	int key,count=0;
	printf("enter the data to be inserted:\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(start==NULL){
		start=temp;
	}
	else{
		p=start;
		while(p!=NULL){
			count++;
			p=p->next;
		}
		printf("enter the position to insert the data:");
		int pos;
		scanf("%d",&pos);
		if(pos>0 && pos<=count+1){
			if(pos==1){
				sll_insert();
			}
			else if(pos==count){
				sll_inserte();
			}
			else{
				int i;
				p=start;
				for(i=0;i<pos-1;i++){
					p=p->next;
				}
				temp->next=p->next;
				p->next=temp;
			}
		}
	}
	traverse();
}
void sll_delete(){
	if(start==NULL){
		printf("no elements in the linked list");
	}
	else if(start->next==NULL){
		temp=start;
		start=NULL;
		free(temp);
	}
	else{
		temp=start;
		start=start->next;
		temp->next=NULL;
		free(temp);
	}
	traverse();
	}
	void sll_dle_last(){
		if(start==NULL){
			printf("no elements in the linked list");
		}
		else{
			p=start;
			while(p->next->next!=NULL){
				p=p->next;
			}
			temp=p->next;
			p->next=NULL;
			free(temp);
		}
		traverse();
	}
	void sll_delete_pos(){
		temp=(struct node *)malloc(sizeof(struct node));
		int count=0;
		if(start==NULL){
			printf("linked list is empty");
		}
		else{
			p=start;
			while(p!=NULL){
				count++;
				p=p->next;
			}
			int pos;
			printf("enter the pos:");
			scanf("%d",&pos);
			if(pos>0 && pos<=count){
				if(pos==1){
					sll_delete();
				}
				else if(pos==count){
					sll_dle_last();
				}
				else{
					p=start;
					int i;
					for(i=0;i<count-1;i++){
						p=p->next;
					}
					temp=p->next;
					p->next=temp->next;
					temp->next=NULL;
					free(temp);
				}
			}
			else{
				printf("enter the valid position");
			}
		}
		traverse();
	}
	void search(){
		if(start==NULL){
			printf("li is empty");
		}
		else{
			int x;
			int flag;
			printf("enter the data to be inserted:");
			scanf("%d",&x);
			p=start;
			while(p!=NULL){
				if(p->data==x){
					flag=1;
					break;
				}
				else{
					p=p->next;
				}
			}
			if(flag==1){
				printf("search is successful");
			}
			else{
				printf("search is unsuccesful");
			}
		}
	} 
