#include<stdio.h>
int main(){
	int n,i,j;
	int temp;
	
	int arr[5];
	printf("enter n values:");
	scanf("%d",&n);
	printf("enter array values:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("diaplaying array values:");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		printf(" ascending order is %d\n",arr[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
