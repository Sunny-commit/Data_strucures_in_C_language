#include<stdio.h>
void sum(int*,int*,int*);
int main(){
	int num1,num2,total;
	printf("enter num1 and num2 values:");
	scanf("%d\n%d\n",&num1,&num2);
	sum(&num1,&num2,&total);
	return 0;
}
void sum(int*a,int*b,int*total){
	*total=*a+*b;
	printf("total is %d",*total);
}
