#include<stdio.h>
#include<stdlib.h>
struct node{
	int coef;
	int expo;
	struct node *next;
}*temp,*p,*start=NULL,*start3=NULL,*start1,*start2;
	struct node *start1,*start2,*p3,*p1,*p2;
struct node *creation(struct node *temp){
	int n,i;
	printf("enter no of elements:");
	scanf("%d",&n);
	int ex,coef;
for(i=0;i<n;i++){
		temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the coef and expo :\n");
	scanf("%d %d",&coef,&ex);
	temp->coef=coef;
	temp->expo=ex;
	temp->next=NULL;
		if(start==NULL || start->expo<ex){
			temp->next=start;
			start=temp;
		}
		else{
			p=start;
			while(p->next!=NULL && p->next->expo>ex){
				p=p->next;
			}
			temp->next=p->next;
			p->next=temp;
		}
	}
	return start;
		
}
struct node *add(){
	printf("enter the first polynomial:\n");
	p1=creation(start1);
	printf("enter the second polnomial:\n");
	p2=creation(start2);
	if(p1==NULL || p2==NULL){
		return start3;
	}
	while(p1!=NULL && p2!=NULL){
		temp=(struct node *)malloc(sizeof(struct node));
		if(start3==NULL){
			start3=temp;
			p3=temp;
		}
		else{
			p3->next=temp;
			p3=temp;
		}
		if(p1->expo<p2->expo){
			temp->coef=p2->coef;
			temp->expo=p2->expo;
			p2=p2->next;
		}
		else if(p1->expo>p2->expo){
			temp->coef=p1->coef;
			temp->expo=p1->expo;
			p1=p1->next;
		}
		else if(p1->expo==p2->expo){
			temp->coef=p1->coef+p2->coef;
			temp->expo=p1->expo;
			p1=p1->next;
			p2=p2->next;
		}
	}
	while(p1!=NULL){
		printf("%d %d",p1->coef,p1->expo);
		p1=p1->next;
	}
	while(p2!=NULL){
			printf("%d %d",p2->coef,p2->expo);
		p2=p2->next;
	}
}

void traverse(){
	p=start3;
	while(p!=NULL){
		printf("%dx^%d",p->coef,p->expo);
		p=p->next;
	}
}
int main(){
	printf("1.polynomial _addition\n");
	int flag,choice;
	flag=1;
	while(flag){
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				add();
				break;
			case 2:
				traverse();
				break;
		}
		printf("for further operations:");
		scanf("%d",&flag);
	}
}
