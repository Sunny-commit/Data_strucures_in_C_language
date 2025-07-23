#include<stdlib.h>
#include<stdio.h>
struct node{
	int data;
	struct node *next;
}*front=NULL,*rear=NULL,*p,*temp;
	
void create_temp(){
	temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data to store into the node :");
    scanf("%d",&temp->data);
    temp->next=NULL;
}
void enqueue(){
	create_temp();
	if(front==NULL)
	{rear=temp;
	front=temp;
	}
	else{
		rear->next=temp;
		rear=temp;
	}
	
}
void queue_create(){
	int n,i,x;
	printf("enter no.of elements in queue :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		enqueue();
	}
}
void dequeue(){
	if(front==NULL)
	printf("queue is empty");
	else{
		temp=front;
		front=front->next;
		free(temp);
	}	
}
void traverse()
{
	if(front==NULL)
	printf("queue is empty");
	else{
		p=front;
		while(p!=NULL)
		{
			printf("the data at node is %d\n",p->data);
			p=p->next;
		}
	}
}
void display_the_list(){
	printf("1---queue_create\n2--traverse\n3---enqueue\n4--dequeue\n-1--to exit\n\n");}
void list_of_operations(int n){

    while(n!=-1){
        
    switch (n)
    {
    case 1:
        queue_create();
        break;
    case 2:
    	traverse();
        break;
	case 3:
    	enqueue();
        break;
    case 4:
        dequeue();
        break;   
    default:
        printf("Invalid input...\n");
    }
    printf("\n \n Please enter respective number to perform the operation ...: ");
    scanf("%d",&n);
    printf("\n");
    }
}
int main()
{
display_the_list();
    printf("Please enter respective number to perform the operation ...:");
    int n;
    scanf("%d",&n);
    printf("\n");
    list_of_operations(n);
}
