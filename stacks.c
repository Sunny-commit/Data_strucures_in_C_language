#include<stdio.h>
#include<stdlib.h>
void push();
int top=-1,m=10;
void main(){
//	push(9);
//	push(8);
//	push(7);
//	push(6);
//	push(5);
//	push(4);
//	push(3);
//	push(2);
//	push(1);
//	push(10);
//	push(11);
//	display();
int i,x,n;
printf("enter max value:");
scanf("%d",&n);
for(i=0;i<n;i++){
	printf("enter data:");
	scanf("%d",&x);
	push(x);
}
}
void push(int x){
	int s[m];
	if(top==NULL){
		printf("stack is full");
	}	
	else{
		top=top+1;
		s[top]=x;
	}
}
//void push(int x)
//{
//	int s[m];
//	if(top==(m-1))
//	{
//		printf("stack is full\n");
//	}
//	else
//	{
//		top=top+1;
//		s[top]=x;
//		printf("success\n");
//	}
//}
void display()
{
	int s[m];
	int i;
	if(top==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d ",s[i]);
		}
	}
}
