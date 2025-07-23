#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *pre;
	int data;
	struct node *next;
}*start=NULL,*p,*temp,*end;
void creation();
void insert_beg();
void insert_end();
void insert_spef();
void delete_beg();
void delete_end();
int main(){
	int choose;
	printf("1.creation\n2.insert_beg\n3.inset_end\n4.insert_spef\n5.delete_beg\n6.delete_end");
	scanf("%d",&choose);
	switch(choose){
		case 1:
			creation();
			break;
		case 2:
			insert_beg();
			break;
		case 3:
			insert_end();
			break;
		case 4:
			insert_spef();
			break;
		case 5:
			delete_beg();
			break;
		case 6:
			delete_end();
			break;
	}
	
}
void creation(){
	int k,n;
	printf("enter the no of terms to insert:");
	scanf("%d",&n);
	for(k=1;k<n;k++){
	temp=(struct node *)malloc(sizeof(struct node));
	int x;
		printf("enter the node data:");
	scanf("%d",&x);
	temp->data=x;
	temp->pre=NULL;
	temp->next=NULL;
	if(start==NULL){
		start=temp;
		end=temp;
	}
	else{
		end->next=temp;
		temp->pre=start;
		end=temp;
	}
	
}
	printf("resultant data:");
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
}
void insert_beg(){
	creation();
	temp=(struct node *)malloc(sizeof(struct node));
	int x;
	printf("enter the node to insert");
	scanf("%d",&x);
	temp->data=x;
	temp->next=NULL;
	if(start==NULL){
		start=temp;
		end=temp;
	}
	else{
		temp->next=start;
		start=temp;
	}
	printf("resultant data");
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
}
void insert_end(){
	creation();
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the node to insert in last:");
	int x;
	scanf("%d",&x);
	temp->data=x;
	temp->next=NULL;
	if(start==NULL){
		start=temp;
		end=temp;
		p=temp;
		printf("1\n");
	}
	else{
		p=start;
		while(p!=NULL){
			p=p->next;
		}
		end->next=temp;
		temp->pre=end->next;
		temp->next=NULL;
		end=temp;
		
		}
		printf("resultant data ");
		p=start;
		while(p!=NULL){
			printf("%d",p->data);
			p=p->next;
		}
	}
void insert_spef(){
	creation();
	temp=(struct node *)malloc(sizeof(struct node));
	printf("enter temp node data:");
	int x;
	scanf("%d",&x);
	temp->data=x;
	temp->next=NULL;
	int count=0,k,pos;
	if(start==NULL){
		start=temp;
		end=temp;
		printf("NULL");
	}
	else{
		printf("1\n");
		p=start;
		while(p!=NULL){
			count=count+1;
			p=p->next;
		}
		printf("enter pos to insert the node data:");
		scanf("%d",&pos);
		printf("3\n");
		if(pos>0 && pos<=count+1){
			if(pos==1){
				insert_beg();
			}
			else if(pos==count+1){
				insert_end();
			}
			else{
				p=start;
				printf("5\n");
				for(k=1;k<pos-1;k++){
					p=p->next;
				}
				temp->next=p->next;
				p->next->pre=temp;
				p->next=temp;
				temp->pre=p;
			}
		}
		else{
			printf("entered invalid position");
		}
	}
	printf("4\n");
	printf("resultant data");
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
}
void delete_beg(){
	creation();
	if(start==NULL){
		printf("li is empty");
	}
	else if(start->next==NULL){
		temp=start;
		temp->next=NULL;
		temp->pre=NULL;
		start->next=NULL;
		free(temp);
	}
	else{
		printf("1\n");
		temp=start;
		temp->next=NULL;
		start=start->next;
		start->pre=NULL;
		temp=start;
		free(temp);
	}
	printf("resultant data:");
	p=start;
	while(p!=start){
		printf("%d",p->data);
		p=p->next;
	}
}
void delete_end(){
	creation();
	if(start==NULL){
		printf("li is empty");
	}
	else{
		p=start;
		while(p->next->next!=NULL){
			p=p->next;
		}
		temp=p->next;
		temp->next=NULL;
		temp->pre=NULL;
		p->next=NULL;
		end=p;
	}
	printf("resultant data:");
	p=start;
	while(p!=start){
		printf("%d",p->data);
		p=p->next;
	}
}
