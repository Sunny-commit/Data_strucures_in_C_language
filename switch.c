#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
}*start,*p,*temp;
void sll_creation();
void sll_transverse();
void sll_insert_beg();
void sll_insert_end();
void sll_insert_spet();
void delete_beg();
void delete_end();
void delete_spef();
int main(){
    printf("enter 1.creation\n 2.transverse\n3.insert_beg\n4.insert_end\n5.insert_spe\n6.delete_end\n7.delete_beg\n8.delete_spef");
    int v;
    printf("enter option:");
    scanf("%d",&v);
    switch(v){
    	case 1:
    		sll_creation();
    		break;
    	case 2:
    		sll_transverse();
    		break;
    	case 3:
    		sll_insert_beg();
    		break;
    	case 4:
    		sll_insert_end();
    		break;
    	case 5:
    		sll_insert_spet();
    		break;
    	case 6:
    		delete_end();
    		break;
    	case 7:
    		delete_beg();
    		break;
    	case 8:
    		delete_spef();
    		break;
	}
}
void sll_creation(){
	struct node *p;
	int choice;
	choice=1;
	while(choice){
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter x value to be inserted:");
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
	printf("\nprinting elements:");
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->link;
	}
}
void sll_transverse(){
	sll_creation();
	temp=(struct node *)malloc(sizeof(struct node));
	if(start==NULL){
		printf("there is no linked list:");
	}
	else{
		p=start;
		while(p!=NULL){
			printf("%d",p->data);
			p=p->link;
		}
	}
}
void sll_insert_beg(){
	sll_creation();
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the new node data values:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(start==NULL){
		start=temp;
	}
	else{
		temp->link=start;
		start=temp;
	}
		printf("displaying the data:");
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->link;
	}
}
void sll_insert_end(){
	sll_creation();
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter new node data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(start==NULL){
		start=temp;
	}
	else{
		p=start;
		while(p->link!=NULL){
			p=p->link;
		}
		p->link=temp;
	}
	printf("displaying the data:");
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->link;
	}
}
void sll_insert_spet(){
	sll_creation();
		temp=(struct node *)malloc(sizeof(struct node));
	printf("enter new node data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	int pos;
	printf("enter the specific pos:");
	scanf("%d",&pos);
	int count=1,k;
	if(start==NULL){
		start=temp;
	}
	else {
		p=start;
		while(p!=NULL){
			count=count+1;
			p=p->link;
		}
	if(pos>0 && pos<=count+1){
		if(pos==1){
			sll_insert_beg();
		}
		else if(pos==count){
			sll_insert_end();
		}
		else{
		for(k=1;k<pos-1;k++){
			p=p->link;
		}
		p->link=temp;
		temp->link=p->link;
		}
	
	}
		printf("displaying the data:");
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->link;
	}
}
}
void delete_beg(){
	creation();
	if(start==NULL){
		printf("li is empty");
	}
	else if(start->link=NULL){
		temp=start;
		start=NULL;
		temp->link=NULL;
		free(temp);
	}
	else{
		temp=start;
		start=start->link;
		temp->link=NULL;
		free(temp);
	}
	printf("resultant data:");
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->link;
	}
		
	}
void delete_end(){
	sll_creation();
	if(start==NULL){
		printf("li is empty");
	}
	else{
		p=start;
		while(p->link->link!=NULL){
			p=p->link;
		}
		temp=p->link;
		temp->link=NULL;
		p->link=NULL;
		free(temp);
	}
	printf("resultant data:");
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->link;
	}
}
	void delete_spef(){
		sll_creation();
		int count=0,pos,k;
		if(start==NULL){
			printf("li is emppty");
		}
		else{
			p=start;
			while(p!=NULL){
				count=count+1;
				p=p->link;
			}
			int y;
			printf("enter pos to delete the node elemtent:");
			scanf("%d",&y);
			if(pos>0 &&pos<=count){
				if(pos==1){
					delete_beg();
				}
				else if(pos==count){
					delete_end();
				}
				else{
					p=start;
					for(k=1;k<pos-1;k++){
						p=p->link;
					}
					temp=p->link;
					p->link=temp->link;
					temp->link=NULL;
					free(temp);
				}
			}
			else{
				printf("entered invalid position:");
			}
		}
		printf("resultant data:");
		p=start;
		while(p!=NULL){
			printf("%d",p->data);
			p=p->link;
		}
	}
