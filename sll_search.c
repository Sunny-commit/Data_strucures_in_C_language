#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
}*start=NULL,*p,*temp;
void sll_creation();
void search();
int main(){
	 search();
}
void sll_creation(){
	int choice;
	choice=1;
	while(choice){
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
	printf("do you want to insert another node:(0/1)");
	scanf("%d",&choice);
}
printf("resultant data:");
p=start;
while(p!=start){
	printf("%d",p->data);
	p=p->link;
}
}
void search(){
	sll_creation();
	int flag;
	printf("enter element to search");
	int x;
	scanf("%d",&x);
	if(start==NULL){
		printf("li is empty");
	}
	else{
		p=start;
		while(p!=NULL){
			if(p->data==x){
				flag=1;
			}
			else{
				p=p->link;
			}
		}
		if(flag==1){
			printf("successful");
		}
		else{
			printf("unsuccessful");
		}
	}
}
