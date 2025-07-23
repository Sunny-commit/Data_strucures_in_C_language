#include<stdio.h>
#define MAX 10
int q[MAX];
int front=-1;
int rear=-1;
void enqueue(){
	if(rear>=MAX-1)
	printf("queue is full");
	else{
		int x;
		printf("enter the value of element :");
		scanf("%d",&x);
		rear=rear+1;
		q[rear]=x;
	}
	if(front==-1)
	front=0;
}

void queue_create(){
	int n,i,x;
	printf("enter no.of elements in stack :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		enqueue();
	}
}
void traverse(){
	if(front==-1)
	printf("queue is empty");
	else{
		int i;
		for(i=front;i<=rear;i++)
		{
			printf("the element at %d is :%d\n",i,q[i]);
		}
	}
}
void dequeue()
{
	if(front==-1)
	printf("queue is empty");
	else{
		if(front==rear)
		{printf("deleting element is %d\n",q[front]);
		front=rear=-1;
		}
		else{
			printf("deleting element is %d\n",q[front]);
			front=front+1;
		}
	}
}
void display_the_list(){
	printf("1---queue_create\n2---enqueue\n3--traverse\n4--dequeue\n-1--to exit\n\n");}
void list_of_operations(int n){

    while(n!=-1){
        
    switch (n)
    {
    case 1:
        queue_create();
        break;
    case 2:
    	enqueue();
        break;
	case 3:
    		traverse();
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
int main(){
display_the_list();
    printf("Please enter respective number to perform the operation ...:");
    int n;
    scanf("%d",&n);
    printf("\n");
    list_of_operations(n);
}
