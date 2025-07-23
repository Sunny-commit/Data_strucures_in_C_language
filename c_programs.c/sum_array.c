#include<stdio.h>
int main(){
	int arr[5];
	int i,sum=0;
	for(i=0;i<=4;i++){
		printf("Enter a number : ");
		scanf("%d",&arr[i]);
	}
	printf("displaying srrays values:");
	for(i=0;i<=4;i++){
		printf("%d\n",arr[i]);
		sum=sum+arr[i];
	}
	printf("%d",sum);
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
