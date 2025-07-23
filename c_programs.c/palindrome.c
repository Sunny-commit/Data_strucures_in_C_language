#include<stdio.h>
int main(){
	int n,z,p,r;
	int sum=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n!=0){
		r=n%10;
		p=r*r*r;
		sum=sum+p;
		n=n/10;
		z=n;
	}
	if(n==z){
		printf("is a palindrome");
	}
	else{
		printf("is not palindrome");
	}
	return 0;
}
