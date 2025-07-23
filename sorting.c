#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*start=NULL,*temp,*p,*p1,*p2,*p3,*start1,*start2,*temp1,*temp2;
void creation();
void sorting();

int main(){
	sorting();
}
void creation(){
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
void sorting(){
	creation();
	printf("\n1\n");
	if(start==NULL){
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
