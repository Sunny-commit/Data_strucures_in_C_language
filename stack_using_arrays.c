#include<stdio.h>
#include<stdlib.h>

#define MAX 5
void push();
void pop();
void traverse();
int top=-1;
  int s[MAX];
int main()
{
	int i;
//	printf("enter number of elements \n");
//	scanf("%d",&max);
	//int s[max];
	int choose,choose_op,x;

	choose=1;
	while(choose){
		printf("1)push \n 2)pop \n 3)traverse\n");
		printf("choose operation");
		scanf("%d",&choose_op);
		switch(choose_op){
			case 1:  push();
					break;
			case 2:  pop();
					break;
			case 3:  traverse();
					break;
		}
		printf("do u want to continue(1/0) \n");
		scanf("%d",&choose);
	}
	

}
void push()
{    	
	if(top==MAX-1)
	{
		printf("stack is full \n");
	}
	
	else
	{	int x;
		printf("enter data to be inserted \n");
		scanf("%d",&x);
		
		top=top+1;
		s[top]=x;
		
	}
	
}

void pop()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
	
		top=top-1;
	}
	
}

void traverse()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{	int i;
		printf("traversing stack \n");
		for(i=top;i>=0;i--)
		{
			printf("%d",s[i]);
		}
	}
	
}
