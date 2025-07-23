#include<stdio.h>
//int prime(int);
//int main(){
//	int n;
//	printf("enter a number:");
//	scanf("%d",&n);
//	prime(n);
//	return 0;
//}
//int prime(int a){
//	int i,count=0;
//	for(i=1;i<=a;i++){
//		if(a%i==0){
//			count++;
//		}
//	}
//	if(count==2){
//		printf("is a prime %d",a);
//	}
//	else
//		printf("is not a prime");
//}
void swap(int,int);
int main(){
	int a,b;
	printf("enter numbers:");
	scanf("%d,%d",&a,&b);
	printf("before swaping are%d and %d\n",a,b);
	swap(a,b);
	return 0;
}
void swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("swaped numbers are %d and %d",a,b);
}
