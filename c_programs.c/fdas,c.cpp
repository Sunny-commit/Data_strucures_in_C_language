#include<stdio.h>
int main(){
	int n,rem;
	scanf("%d",&n);
	int i,count=1;
	while(n>=0){
		n=n/10;
		count++;
	}
	printf("no of couns:%d",count);
}
