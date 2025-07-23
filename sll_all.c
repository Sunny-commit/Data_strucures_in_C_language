#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
}*start,*p,*temp,*start1,*start2;
void sll_creation();
void sll_traverse();
void sll_insert_beg();
void sll_insert_end();
void sll_insert_spet();
void delete_beg();
void delete_end();
 void delete_spef();
 struct node *creations(struct node *s);
 void concatenation();
int main(){
    printf("enter 1.creation\n 2.transverse\n3.insert_beg\n4.insert_end\n5.insert_spe\n6.delete_end\n7.delete_beg\n8.delete_spef\n9.concatination");
    int v;
    printf("\nenter option:");
    scanf("%d",&v);
    switch(v){
    	case 1:
    		sll_creation();
    		break;
    	case 2:
    		sll_traverse();
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
	printf("creation\n");
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
if(start==NULL){
	printf("li is empty");
}
else{
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->link;
}
}
}
void sll_traverse(){
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
	sll_traverse();
}
void sll_insert_end(){
	sll_creation();
	printf("\ninserting end:\n");
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
	sll_traverse();
}
void sll_insert_spet(){
	sll_creation();
		printf("\ninserting at specified position:\n");
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
			p=start;
		for(k=1;k<pos-1;k++){
			p=p->link;
		}
		temp->link=p->link;
		p->link=temp;
		}
	
	}
	else{
		printf("invalid position:");
	}
	}
	sll_traverse();
}
void delete_beg(){
	sll_creation();
	printf("\ndeleting at beginning:\n");
	if(start==NULL){
		printf("li is empty");
	}
	else if(start->link=NULL){
		temp=start;
		start=NULL;
		free(temp);
	}
	else{
		temp=start;
		start=start->link;
		temp->link=NULL;
		free(temp);
	}
	sll_traverse();
	
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
	sll_traverse();
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
					free(temp);
				}
			}
			else{
				printf("entered invalid position:");
			}
		}
		sll_traverse();
}
struct node *creations(struct node *s){
	int choice;
	choice=1;
	while(choice){
		temp=(struct node *)malloc(sizeof(struct node));
		int x;
		scanf("%d",&x);
		temp->data=x;
		temp->link=NULL;
		if(s==NULL){
			s=temp;
			p=temp;
		}
		else{
			p->link=temp;
			p-temp;
		}
		printf("enter 1 to insert node and 0 to stop inserting:");
		scanf("%d",&choice);
	}
	return s;
}
void concatenation(){
	start1=creations(start);
	printf("enter sl_2 data:");
	start2=creations(start);
	p=start1;
	while(p->link!=NULL){
		printf("%d",p->data);
		p=p->link;
	}
	p->link=start2;
	printf("printing concatination :");
	p=start1;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->link;
	}
}
