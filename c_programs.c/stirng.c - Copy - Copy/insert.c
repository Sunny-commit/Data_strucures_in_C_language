#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*start=NULL,*temp,*p,*temp2,*p1,*p2,*p3;
void sll_creation();
void insert_beg();
void insert_end();
void insert_spef();
void delete_beg();
void delete_end();
void delete_spef();
void search();
void sorting();
void inverse();
int main(){
	int choose;
	printf("1.creation\n2.insert _beg\n3.insert_end\n4.insert_spef\n5.delete_beg\n6.delete_end\n7.delete_spef\n8.search\n9.sorting\n10.inverse");
	scanf("%d",&choose);
	switch(choose){
		case 1:
			sll_creation();
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
		case 7:
			delete_spef();
			break;
		case 8:
			search();
			break;
		case 9:
			sorting();
			break;
		case 10:
			inverse();
			break;
	}

}
void sll_creation(){
	int choice;
	choice=1;
	while(choice){
		struct node *temp=(struct node *)malloc(sizeof(struct node));
		int x;
		printf("temp node data is:");
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
		printf("print 1 to continue the loop or 0 to stop the loop:");
		scanf("%d",&choice);
	}
	printf("diaplaying the variables:");
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
}
void insert_beg(){
	sll_creation();
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	int x;
	printf("enter the new tempdata to insert:");
	scanf("%d",&x);
	temp->data=x;
	temp->next=NULL;
	if(start==NULL){
		start=temp;
	}
	else{
		temp->next=start;
		start=temp;
	}
	printf("printing the resultant data:");
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
}
void insert_end(){
	sll_creation();
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	printf("enter the tempdata to insert in last:");
	int x;
	scanf("%d",&x);
	temp->data=x;
	temp->next=NULL;
	if(start==NULL){
		start=temp;
	}
	else{
		p=start;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=temp;
	}
	printf("resultant data is :");
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
}
void insert_spef(){
	sll_creation();
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	int x,pos;
	printf("enter new nodedata to insert:");
	scanf("%d",&x);
	temp->data=x;
	temp->next=NULL;
	int count=0,k;
	if(start==NULL){
		printf("li is empty:");
	}
	else{
		p=start;
		while(p!=NULL){
			count=count+1;
			p=p->next;
		}
	}
	printf("enter the position to insert a new node:");
	scanf("%d",&pos);
	if(pos>0 && pos<=count+1){
		if(pos==1){
			insert_beg();
		}
		else if(pos==count+1){
			insert_end();
		}
		else{
			p=start;
			for(k=1;k<pos-1;k++){
				p=p->next;
			}
			temp->next=p->next;
			p->next=temp;
		}
	}
	else{
		printf("invalid position:");
	}
	printf("resultant data :");
		p=start;
		while(p!=NULL){
			printf("%d",p->data);
			p=p->next;
		}
	}
	void delete_beg(){
		sll_creation();
		if(start==NULL){
			printf("li is empty");
		}
		else if(start->next=NULL){
			temp=start;
			start=NULL;
			free(temp);
		}
		else{
			temp=start;
			start=start->next;
			free(temp);
			
		}
		printf("resultant data is:");
		p=start;
		while(p!=NULL){
			printf("%d",p->data);
			p=p->next;
		}
		
	}
	void delete_end(){
		sll_creation();
		if(start==NULL){
			printf("li is empty");
		}
		else if(start->next==NULL){
			temp=start;
			start=NULL;
			free(temp);
		}
		else{
			p=start;
			while(p->next->next!=NULL){
				p=p->next;
			}
			temp=p->next;
			p->next=NULL;
			free(temp);
		}
		printf("resultant data");
		p=start;
		while(p!=start){
			printf("%d",p->data);
			p=p->next;
		}
	}
	void delete_spef(){
		sll_creation();
		int k,count=0,pos;
		if(start==NULL){
			temp=start;
			start=NULL;
			free(temp);
		}
		else if(start->next=NULL){
			temp=start;
			start=NULL;
			free(temp);
		}
		else{
			p=start;
			while(p!=NULL){
				count=count+1;
				p=p->next;
			}
		}
		printf("enter the position :");
		scanf("%d",&pos);
		if(pos>0 && pos<=count){
			if(pos==1){
				delete_beg();
			}
			else if(pos==count){
				delete_end();
			}
			else{
				p=start;
				for(k=1;k<pos-1;k++){
					p=p->next;
				}
				temp=p->next;
				p->next=temp->next;
				temp->next=NULL;
				free(temp);
			}
		}
		else{
			printf("enter valid position :");
			
		}
		printf("resultant data");
			p=start;
			while(p!=NULL){
				printf("%d",p->data);
				p=p->next;
			}
	}
	void search(){
		sll_creation();
		struct node *temp=(struct node *)malloc(sizeof(struct node));
		int x,flag=0;
		printf("enter the data to match");
		scanf("%d",&x);
		if(start==NULL){
			start=temp;
		}
		else{
			p=start;
			while(p!=NULL){
				if(p->data==x){
					flag=1;
					break;
				}
				else{
					p=p->next;
				}
			}
			
		}
		if(flag==1){
			printf("search is successful");
		}
		else{
			printf("there is no matched key");
		}
	}
void sorting(){
	sll_creation();
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	struct node *temp2=(struct node *)malloc(sizeof(struct node));
	int x;
	if(start==NULL){
		printf("li is empty");
	}
	else if(start->next==NULL){
		printf("there is only one element:");
	}
	else{
		for(temp=start;temp!=NULL;temp=temp->next){
			for(temp2=temp->next;temp2!=NULL;temp2=temp2->next){
				if(temp->data >temp2->data){
					x=temp->data;
					temp->data=temp2->data;
					temp2->data=x;
				}
			}
		}
	}
	printf("resultant data:");
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
	
}
void inverse(){
	sll_creation();
	if(start->next==NULL){
		printf("there is only one li");
	}
	else{
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
	printf("resultant data:");
	p=start;
	while(p!=NULL){
		printf("%d",p->data);
		p=p->next;
	}
}
	
	
	
	
