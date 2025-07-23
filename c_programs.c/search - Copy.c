#include<stdio.h>
//int main(){
//	int i,ts,num;
//	int count;
//	int arr[10];
//	printf("enter number of elements");
//	scanf("%d",&num);
//	printf("enter number to search:");
//	scanf("%d",&ts);
//	for(i=0;i<num;i++){
//		scanf("%d",&arr[i]);
//	}
//	printf("displaying %d array:",num);
//	for(i=0;i<num;i++){
//		printf("%d\n",arr[i]);
//		if(arr[i]==ts){
//			printf("%d is present at tloation %d",ts,i+1);
//			break;
//		}
//	
//	}
//	if(i==num){
//		printf("%d number is not found",ts);
//	}
//	
//-----------------------------------------------------------------------------------------------------------------------------	
int main(){
	int i,count,ts;
	int n;
	int arr[10];
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter the array numbers:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("enter number to search:");
	scanf("%d",&ts);
	for(i=0;i<n;i++){
		if(arr[i]==ts){
			count=1;
			break;
		}
		}
		if(count==1){
			printf("%d is index ",i);
		}
}
