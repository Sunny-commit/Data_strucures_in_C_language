#include<stdio.h>
#define MAX 10
int cq[MAX],f=-1,r=-1;
void enqueue(){
	if(f==(r+1)%MAX)
	printf("cq is full");
	else{
		int x;
		printf("enter the value of element :");
		scanf("%d",&x);
		r=r+1;
		cq[r]=x;
	}
	if(f==-1)
		f=0;	
}
void circular_queue_create(){
	int n,i,x;
	printf("enter no.of elements in stack :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		enqueue();
	}
}
void dequeue(){
	if(f==-1)
	printf("cq is empty");
	else{
		printf("%d",cq[f]);
		if(f==r)
		f=r=-1;
		else
		f=(f+1)%MAX;
	}
}
void traverse(){
	if(f==-1)
	printf("queue is empty");
	else{
		int i=f%MAX;
		do{
			printf("the element is %d\n",cq[i]);
			i=i+1;
		}while(i!=(r+1)%MAX);	
	}
}
void display_the_list(){
	printf("1---circular_queue_create\n2--traverse\n3---enqueue\n4--dequeue\n-1--to exit\n\n");}
void list_of_operations(int n){

    while(n!=-1){
        
    switch (n)
    {
    case 1:
        circular_queue_create();
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
        break;
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
