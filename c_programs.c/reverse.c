#include<stdio.h>
int main(){
	int n;
	int reverse=0;
	int r;
	printf("enter a number to reverse:");
	scanf("%d",&n);
	while(n!=0){
		r=n%10;
		reverse=reverse*10+r;
		n=n/10;
	}
	printf("%d",reverse);
	return 0;
}
