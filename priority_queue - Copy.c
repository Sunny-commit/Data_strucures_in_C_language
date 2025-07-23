#include<stdio.h>
#define MAX 50
int itemcount=0;
int pq[MAX];
/*bool isempty(){
	return itemcount==0;
}
bool isfull(){
	return itemcount==MAX;
}*/
void pq_enqueue(){
	if(itemcount==MAX)
	printf("pq is full");
	else if(itemcount==0)
	{	int x;
		printf("enter the value of element :");
		scanf("%d",&x);
		pq[itemcount++]=x;
	}
	else{
		int x,i;
		printf("enter the value of element :");
		scanf("%d",&x);
		for(i=itemcount-1;i>=0;i--){
			if(x>pq[i])
			pq[i+1]=pq[i];
			else 
			break;
		}
		pq[i+1]=x;
		itemcount+=1;
	}
}
void pq_dequeue()
{
	if(itemcount==0)
	printf(" pq queue is empty");
	else
	printf("dequeued element is %d",pq[--itemcount]);
}
void pq_queue_create(){
	int n,i,x;
	printf("enter no.of elements in stack :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		pq_enqueue();
	}
}
void pq_traverse(){
	if(itemcount==0)
	printf("queue is empty");
	else{
		int i;
			for(i=itemcount-1;i>=0;i--)
			printf("the element at %d is :%d\n",i,pq[i]);
	
	}
}
void display_the_list(){
	printf("1---pq_queue_create\n2---pq_enqueue\n3--pq_traverse_ascending\n4--pq_dequeue\n-1--to exit\n\n");}
void list_of_operations(int n){

    while(n!=-1){
        
    switch (n)
    {
    case 1:
        pq_queue_create();
        break;
    case 2:
    	pq_enqueue();
        break;
	case 3:
    	pq_traverse();
        break;
    case 4:
        pq_dequeue();
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
