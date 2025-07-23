#include<stdio.h>
#include<stdio.h>
struct node{
	int data;
	struct node *link;
};
int main(){
	struct node *start;
	start=(struct node*)malloc(sizeof(struct node));
	start->data=45;
	start->	link=NULL;
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	struct node *node2;
	node2=(struct node*)malloc(sizeof(struct node));
	node2->data=67;
	node2->link=NULL;
	start->link=node2;
	temp->data=3;
	temp->link=start;
	start=temp;
	
	struct node *ptr=NULL;
	ptr=(struct node *)malloc(sizeof(struct node));
	ptr=start;
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->link;
	}
}
