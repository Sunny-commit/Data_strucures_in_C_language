#include<stdio.h>
int main(){
	int n,num[10],i;
	int sum=0;
	int avg;
	printf("enter no of elements:");
	scanf("%d",&n);
	for(i=0;i<n;++i){
		printf("enter number %d:",i+1);
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	avg=sum/n;
	printf("%d",avg);
}
