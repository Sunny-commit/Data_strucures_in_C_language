#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*start=NULL,*temp,*p,*p1,*p2,*p3,*start1,*start2,*temp1,*temp2;
//void creation(struct node *s);
struct node *creation(struct node *s);
void concatination();
void creation1();
void sll_reverse();
void search();
void sorting();
int main(){
	int choose;
	printf("1.concatination\n2.reverse\n3.search\n4.sorting");
	scanf("%d",&choose);
	switch(choose){
		case 1:
			concatination();
			break;
		case 2:
			sll_reverse();
			break;
		case 3:
			search();
			break;
		case4:
			sorting();
			break;
		
	}
	
}
void creation1(){
	int choice;
	choice=1;
	while(choice){
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the node datas:");
	int x;
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
	printf("enter 1 to insert one more or 0 to stop:");
	scanf("%d",&choice);
}
printf("resultant data:");
p=start;
while(p!=NULL){
	printf("%d",p->data);
	p=p->next;
}
}
	struct node *creation(struct node *s){
		int choice;
		choice=1;
		while(choice){
			temp=(struct node *)malloc(sizeof(struct node));
			printf("enter the node value:");
			int x;
			scanf("%d",&x);
			temp->data=x;
			temp->next=NULL;
			if(s==NULL){
				s=temp;
				p=temp;
			}
			else{
				p->next=temp;
				p=temp;
			}
			printf("enter 1 to insert new node 0 to stop:");
			scanf("%d",&choice);
		}
		return s;
	}
	void concatination(){
		start1=creation(start);
		printf("enter li_2 data:\n ");
		start2=creation(start);
		p=start1;
		
		while(p->next!=NULL){
			p=p->next;	
		}
		p->next=start2;
		printf("printing concatination linked list");
		p=start1;
		while(p!=NULL){
			printf("%d  ",p->data);
			p=p->next;
		}
	}
	void sll_reverse(){
	creation1();
	if(start==NULL){
		printf("li is empty");
	}
	else if(start->next=NULL){
		printf("li have onlly one node");
	}
	else{
		printf("1\n");
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
	printf("2\n");
	printf("resultant data:");
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
	}
void search(){
	creation1();
	printf("enterS");
	int flag=0;
	if(start==NULL){
		printf("li is empty");
	}
	else{
		int x;
			printf("enter value to search");
	scanf("%d",&x);
		p=start;
		while(p!=NULL){
			if(p->data=x){
				flag=1;
				break;
			}
			else{
				p=p->data;
			}
		}
		if(flag=1){
			printf("search is successful");
		}
		else{
			printf("search is not successful");
		}
}
}
void sorting(){
	creation1();
	if(start=NULL){
		printf("li is empty");
	}
	else if(start->next=NULL){
		printf("li has one term");
	}
	else{
		int x;
		for(temp1=start;temp!=NULL;temp1=temp1->next){
			for(temp2=temp1->next;temp2!=NULL;temp2=temp2->next){
				if(temp1->data>temp2->data){
					x=temp1->data;
					temp1->data=temp2->data;
					temp2->data=x;
				}
			}
		}
	}
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
		
	}
