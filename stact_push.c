#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*top=NULL,*p,*temp;
struct node *push();
struct node *pop();
int main(){
	int choose;
	int choice;
	choice=1;
	while(choice){
	printf("1.push\n2.pop\n");
	printf("enter option:");
	scanf("%d",&choose);
	switch(choose){
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
}
printf("do u want to continue(1/0)");
scanf("%d",&choice);
}
}
void creation(){
	int choice;
	choice=1;
	while(choice){
	int x;
	printf("enter the data:");
	scanf("%d",&x);
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=NULL;
	if(top==NULL){
		top=temp;
	}
	else{
		temp->next=top;
		top=temp;
	}
	printf("enter 1 to continue or o to stop inserting:");
	scanf("%d",&choice);
}
}
void traverse(){
	p=top;
while(p!=NULL){
	printf("%d",p->data);
	p=p->next;
}
}
struct node *push(){
	creation();
printf("resultant data:");
traverse();
}
//---------------------pop operator-----------------------------
struct node *pop(){
	if(top==NULL){
		printf("stack is empty");
	}
	else{
		temp=top;
		top=top->next;
		temp->next=NULL;
		free(temp);	
	}
	printf("resultant data:");
	traverse();
}
