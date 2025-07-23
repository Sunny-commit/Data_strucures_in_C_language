#include<stdio.h>
int main(){
	int n;
	int ele,count,flag;
	printf("enter n value:");
	scanf("%d",&n);
	int arr[n];
	int i,j;
	for(i=0;i<n;i++){
		printf("Enter n%d value",i);
		scanf("%d",&arr[i]);
	}
	for(j=0;j<n;j++){
		printf("printing j%d value is:%d\n",j,arr[j]);
	}
	for(i=0;i<n;i++){
		count = 0;
		flag = 0;
		ele = arr[i];
		for (k = 0;k<=i;k++){
			if (arr[i] == arr[k])
			flag+=1;
		}
		for(j=0;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(flag==1){
			printf("duplicate of %d is %d",arr[i],count);
		}	
	}
}
