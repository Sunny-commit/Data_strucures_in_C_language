#include<stdio.h>
int main(){
	int n;
	double arr[100];
	printf("enter the number of elements(1 to 100):");
	scanf("%d",&n);
	for (int i=0;i<n;++i){
		printf("enter number%d:",i+1);
		scanf("%lf",&arr[i]);
	}
	for(int i=1;i<n;++i){
		if(arr[0]<arr[i]){
			arr[0]=arr[i];
		}
	
	}
		printf("largest element=%.21f",arr[0]);
	return 0;
}
