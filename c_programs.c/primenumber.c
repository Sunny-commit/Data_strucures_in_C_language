#include<stdio.h>
int main(){
	int n ,i;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=0;i<n/2;i++){
		if(n%i==0){
			printf("is not a prime number");
		}
		else{
			printf("is a prime number");
		}
	}
	return 0;
}
