#include<stdio.h>
int fact(int );
int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	int x = fact(num);
	printf("factorial is : %d",x);
}

int fact(int n){
	int factn;
	if( n==1){
		return 0;
	}
	else{
		factn=n*fact(n-1);
	return factn;
	}
	
}
