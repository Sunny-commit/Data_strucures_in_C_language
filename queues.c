#include<stdio.h>
#include<stdlib.h>
//using arrays
#define max 5
int front=-1;
int rear=-1;
int a[max];
void enqueue(int value){
	if(rear>=max-1){
		printf("underflow");
	}
	else{
		rear=rear+1;
		a[rear]=value;
	}
	if(front==-1){
		front=0;
	}
	traverse();
}
void traverse(){
	if(front==-1){
		printf("no elements:");
	}
	else{
		int i;
		for(i=front;i<=rear;i++){
			printf("%d",a[i]);
		}
	}
}
int main(){
	int value,flag,choice;
	printf("1.enqueue\n");
	flag=1;
	while(flag){
		printf("choice:\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("enter the value to insert:");
				scanf("%d",&value);
				enqueue(value);
		}
		printf("for further 0 or 1");
		scanf("%d",&flag);
	}
} 
