#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*start=NULL,*p,*temp,*end;
int main(){
	
}
void creaton(){
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the data:");
	int x;
	scanf("%d",&x);
	temp->data=x;
	temp->next=NULL;
	if(start==NULL){
		start=temp;
		p=temp;
		end=temp;
	}
	else if(start->next=NULL){
		start=temp;
		start->next=NULL;
		end=temp;
		
	}
}
