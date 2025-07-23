#include<stdio.h>
int main(){
	int i,n,j;
	int temp;
	int arr[10];
	printf("enter size of the array:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("displaying the array values:");
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
	printf("ascending order%d\n",arr[i]);
	}
	printf("%d",arr[n-n]);
	printf("%d",arr[n-1]);
	return 0;
}
