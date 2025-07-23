#include<stdio.h>
int main(){
	int n;
	int count=0;
	printf("enter a number to count:");
	scanf("%d",&n);
	while(n!=0){
		n=n/10;
		++count;
	}
	printf("no of digits are%d",count);
}
