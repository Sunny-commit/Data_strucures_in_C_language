#include<stdio.h>
#define MAX 10
int dq[MAX];
int front=-1,rear=-1;
void enqueue_at_rear(){
	if(rear>=MAX-1)
	printf("queue is full");
	else{
		int x;
		printf("enter the value of element :");
		scanf("%d",&x);
		rear=rear+1;
		dq[rear]=x;
	}
	if(front==-1)
	front=0;
}
void enqueue_at_front(){
	if(front==0)
	printf("space is not available at front end");
	else if(front==-1){
		int x;
		printf("enter the value of element :");
		scanf("%d",&x);
		dq[++front]=x;
		if(rear==-1)
		rear=0;
			}
	else{
		int x;
		printf("enter the value of element :");
		scanf("%d",&x);
		dq[--front]=x;
	}
}
void double_queue_create(){
	int n,i,x;
	printf("enter no.of elements in stack :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		enqueue_at_rear();
	}
}
void traverse(){
	if(front==-1)
	printf("queue is empty");
	else{
		int i;
		for(i=front;i<=rear;i++)
		{
			printf("the element at %d is :%d\n",i,dq[i]);
		}
	}
}
void dequeue_at_front()
{
	if(front==-1)
	printf("queue is empty");
	else{
		if(front==rear)
		{printf("deleting element is %d\n",dq[front]);
		front=rear=-1;
		}
		else{
			printf("deleting element is %d\n",dq[front]);
			front=front+1;
		}
	}
}
void dequeue_at_rear(){
	if(front==-1)
	printf("queue is empty");
	else
	{
		printf("deleting element is %d",dq[rear]);
		if(front==rear)
		front=rear=-1;
		else
		rear=rear-1;
	}
}
void display_the_list(){
	printf("1---queue_create\n2---enqueue_at_rear\n3--enqueue_at_front\n4--traverse\n5--dequeue_at_front\n6--dequeue_at_rear\n-1--to exit\n\n");}
void list_of_operations(int n){

    while(n!=-1){
        
    switch (n)
    {
    case 1:
        double_queue_create();
        break;
    case 2:
    	enqueue_at_rear();
        break;
    case 3:enqueue_at_front();
    	break;
	case 4:
    	traverse();
        break;
    case 5:
        dequeue_at_front();
        break;
    case 6:
    	dequeue_at_rear();
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
