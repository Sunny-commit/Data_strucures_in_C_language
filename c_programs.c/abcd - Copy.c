#include<stdio.h>
int fact(int);
int main(){
	int n=10;
	int fact1;
	fact(n);
	printf("%ld",fact1);
}
int fact(int n){
	int fact1;
	if(n==0){
		return 1;
	}
	else{
		fact1=n*fact(n-1);
		return fact1;
	}
}
