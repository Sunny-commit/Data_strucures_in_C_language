 #include<stdio.h>
 #include<stdlib.h>
 struct node{
 	int data;
 	struct node *next;
 }*start=NULL,*temp,*p,*start2;
 struct node *newnode(struct node *temp)
 {
 	int x;
 	temp=(struct node*)malloc(sizeof(struct node));
 	printf("Enter the data to add:");
 	scanf("%d",&x);
 	temp->data=x;
 	temp->next=NULL;
}
struct node * creation(struct node *start)
{
	int choice=1,x;
	while(choice)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:");
		scanf("%d",&x);
		temp->data=x;
		temp->next=NULL;
		if(start==NULL)
		{
			start=p=temp;
		}
		else
		{
			p->next=temp;
			p=p->next;
		}
		printf("Do you want to insert data?");
		scanf("%d",&choice);
	}
	return start;	
}
void traverse(struct node *start)
{
	if(start==NULL)
	{
		printf("Linked list is empty");
	}
	else
	{
		p=start;
		while(p!=NULL)
		{
			printf("%d ",p->data);
			p=p->next;
		}
	}
}
struct node *atbeg(struct node *start)
 {
 	printf("\nInserting at beggining:");
 	temp=newnode(temp);
 	if(start==NULL)
 	{
 		start=temp;
	 }
	 else
	 {
	 	temp->next=start;
	 	start=temp;
	 }
	 return start;
 }
struct node *atend(struct node *start)
{
	temp=newnode(temp);
 	if(start==NULL)
 	{
 		start=temp;
	 }
	 else
	 {
	 	p=start;
	 	while(p->next!=NULL)
	 	{
	 		p=p->next;
		 }
		 p->next=temp;
		 temp->next=NULL;
	 }
	 return start;
}
struct node *atspec(struct node *start,int pos)
{
	int count=0,k;
 	temp=newnode(temp);
 	if(start==NULL)
 	{
 		start=temp;
	 }
	 else
	 {
	 	p=start;
	 	while(p!=NULL)
	 	{
	 		count++;
	 		p=p->next;
		 }
		 if(pos>0 && pos<count+1)
		 {
		 	if(pos==1)
		 	{
		 		start=atbeg(start);
			 }
			 else if(pos==count+1)
			 {
			 	start=atend(start);
			 }
			 else
			 {
			 	p=start;
			 	for(k=1;k<pos-1;k++)
			 	{
			 		p=p->next;
				}
				temp->next=p->next;
				p->next=temp;
			 }
		 }
	 }
	 return start;
}
struct node *dltbeg(struct node *start)
{
	if(start==NULL)
	{
		printf("Linked list is empty");
	}
	else if(start->next==NULL)
	{
		temp=start;
		start=NULL;
		temp->next=NULL;
		free(temp);
	}
	else
	{
		temp=start;
		start=temp->next;
		temp->next=NULL;
		free(temp);
	}
	return start;
}
struct node *dltend(struct node *start)
 {
 	if(start==NULL)
 	{
 		printf("Linked list is empty");
	}
	else if(start->next==NULL)
	{
		temp=start;
		start=NULL;
		free(temp);
	}
	else
	{
		p=start;
		while(p->next->next!=NULL)
		{
			p=p->next;
		}
		temp=p->next;
		p->next=NULL;
		free(temp);
	}
	return start;
 }
struct node *dltspec(struct node *start,int pos)
 {
 	int count=0,k=1;
 	if(start==NULL)
 	{
 		printf("Linked list is empty");	
	}
	else if(start->next==NULL)
	{
		temp==start;
		start=NULL;
		free(temp);
	}
	else
	{
		p=start;
		while(p!=NULL)
		{
			count++;
			p=p->next;
		}
		if(pos>0 && pos<=count)
		{
			if(pos==1)
			{
				start=dltbeg(start);
			}
			else if(pos==count)
			{
				start=dltend(start);
			}
			else
			{
				p=start;
				for(k=1;k<pos-1;k++)
				{
					p=p->next;
				}
				temp=p->next;
				p->next=temp->next;
				temp->next=NULL;
				free(temp);
			}
		}
		else
		{
			printf("Invalid position");
		}
	}
	return start;
	
 }
void searching()
 {
 	int flag;
 	int x;
 	if(start==NULL)
 	{
 		printf("Linked list is empty");
	 }
	 else
	 {
	 	temp=start;
	 	printf("\nInput the data to be search:");
	 	scanf("%d",&x);
	 	while(temp!=NULL)
	 	{
	 		if(temp->data==x)
	 		{
	 			flag=1;
	 			break;
			 }
			 else
			 {
			 	temp=temp->next;
			 }
		 }
	 }
	 if(flag==1)
	 {
	 	printf("Searching is succesfull");
	 }
	 else
	 {
	 	printf("Searching is not successful");
	 }
 }
 struct node *dlt_by_value(struct node *start,int key_to_dlt)
 {
 	struct node *p=start;
 	int count=0,flag=0;
 	for(p=start;p!=NULL;p=p->next)
 	{
 		count++;
		if(p->data==key_to_dlt)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		start=dltspec(start,count);
	}
	else
	{
		printf("Data is not found");
	}
	return start;
 }
 struct node *sorting(struct node *start)
 {
 	int x;
 	struct node *temp1,*temp2;
 	if(start==NULL)
 	{
 		printf("Linked list is empty");
	}
	else if(start->next==NULL)
	{
		printf("Linked list contain only one element");
	}
	else
	{
		temp1=(struct node*)malloc(sizeof(struct node));
		temp2=(struct node*)malloc(sizeof(struct node));
		for(temp1=start;temp1!=NULL;temp1=temp1->next)
		{
			for(temp2=temp1->next;temp2!=NULL;temp2=temp2->next)
			{
				if(temp1->data>temp2->data)
				{
					x=temp1->data;
					temp1->data=temp2->data;
					temp2->data=x;
				}
			}
		}
	}
	return start;
 }
 struct node *reverse(struct node *start)
 {
 	struct node *p,*q,*r;
	if(start==NULL)
	printf("linked list is empty");
	else if(start->next==NULL)
	printf("linked list contains only one node");
	else{
		p=start;
		q=p->next;
		r=q->next;
		q->next=p;
		p->next=NULL;
		while(r!=NULL)
		{
			p=q;
			q=r;
			r=q->next;
			q->next=p;
		}
		start=q;	
	}
	return start;
 }
 struct node *concat(struct node *start,struct node *start2)
 {
 	start2=creation(start2);
 	printf("\nFirst Linked list is:");
 	traverse(start);
 	printf("\nSecound Linked list is:");
 	traverse(start2);
 	if(start==NULL)
 	{
 		printf("Concated list is:");
 		traverse(start);
	}
	else
	{
		p=start;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=start2;
	}
	return start;
 }
 struct node *merge(struct node *start,struct node *start2)
 {
 	start=creation(start);
 	start2=creation(start2);
 	printf("\nLinked list one:");
 	traverse(start);
 	printf("\nLinked list 2:");
 	traverse(start2);
 	struct node *p1,*p2,*st;
 	if(start==NULL && start2==NULL)
 	{
 		printf("Merging is not possible");
	}
	else
	{
		start=sorting(start);
		start2=sorting(start2);
		st=temp;
		p1=start;
		p2=start2;
		if(p1->data>p2->data)
		{
			temp->next=p2;
			p2=p2->next;
		}
		else if(p2->data>=p1->data)
		{
			temp->next=p1;
			p1=p1->next;
		}
		temp=temp->next;
	}
	if(p1!=NULL)
	{
		temp->next=p1;
	}
	else
	{
		temp->next=p2;
	}
	return st->data;
 }
 void splitting(struct node*start)				
{		
int count =0,k;
	p=start;
	while(p!=NULL)
	{
			count++;
			p=p->next;
	}
	p=start;
	for (k=1;k<count/2;k++)
		p=p->next;
	start2=p->next;
	p->next=NULL;
	printf("list 1:");
	traverse(start);
	printf("\nlist 2: ");
	traverse(start2);
	printf("\n");
}
int main()
{
	int choose,pos,key_to_dlt;
	printf("\n1.Creating");
	printf("\n2.Traversing");
	printf("\n3.Insertion at beggining");
	printf("\n4.Insertion at end");
	printf("\n5.Insertion at specific position");
	printf("\n6.Deleting at beggining");
	printf("\n7.Deleting at end");
	printf("\n8.Deleting at specific position");
	printf("\n9.searching");
	printf("\n10.Deleting by given value");
	printf("\n11.Sorting");
	do{
		printf("\nEnter case value to impliment:");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1:
				start=creation(start);
				break;
			case 2:
				traverse(start);
				break;
			case 3:
				start=atbeg(start);
				break;
			case 4:
				start=atend(start);
				break;
			case 5:
				printf("\nEnter the position do you want to inser data:");
				scanf("%d",&pos);
				start=atspec(start,pos);
				break;
			case 6:
				start=dltbeg(start);
				break;
			case 7:
				start=dltend(start);
				break;
			case 8:
				printf("\nEnter the position:");
				scanf("%d",&pos);
				start=dltspec(start,pos);
				break;
			case 9:
				searching(start);
				break;
			case 10:
				printf("\nKey value to delete:");
				scanf("%d",&key_to_dlt);
				start=dlt_by_value(start,key_to_dlt);
				break;
			case 11:
				start=sorting(start);
				break;
			case 12:
				start=reverse(start);
				break;
			case 13:
				start=concat(start,start2);
				break;
			case 14:
				start=merge(start,start2);
				break;
			case 15:
				splitting(start);
				break;
			case 0:
				exit(0);
			deafault:
				printf("Entered invalid case value");
				
		}
	}
	while(choose);
}
