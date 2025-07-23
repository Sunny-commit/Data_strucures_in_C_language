

#include<stdio.h>
int gcd(int,int);
int main(){
	int a,b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("%d",gcd(a,b));
}
int gcd(int a,int b){
	if(b!=0)
		return gcd(b,a%b);
	else
		return a;
}
