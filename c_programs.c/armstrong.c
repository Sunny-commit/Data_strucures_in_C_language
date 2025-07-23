#include<stdio.h>
int main(){
	int n ,r,a;
	int z=0;
	printf("enter a number to check armstrong:");
	scanf("%d",&n);
	while(n!=0){
		r=r%10;
		z=z*10+r;
		n=n/10;
		a=z;
	}
	if(n==a){
		printf("is a armstrong number");
	}
	else{
		printf("is not a armstrong number");
	}
}
