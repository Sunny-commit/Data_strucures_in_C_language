#include<stdio.h>
int arr();
int main(){
	arr();
	
	
	
	
}
int arr(){
	int a[2];
	int b[2];
	int i;
	int result[2];
	for(i=0;i<2;i++){
		printf("enter a%d:",i);
		scanf("%d",&a[i]);
	}
	printf("displaying array a values:\n");
	for(i=0;i<2;i++){
		printf("%d\n",a[i]);
	}
	printf("enter array b values:\n");
	for(i=0;i<2;i++){
		printf("enter b%d:",i);
		scanf("%d",&b[i]);
	}
	printf("displaying array b values\n");
	for(i=0;i<2;i++){
		printf("%d\n",b[i]);
	}
	for(i=0;i<2;i++){
		result[i]=a[i]+b[i];
	}
	printf("enter result values:\n");
	for(i=0;i<2;i++){
		printf("%d\n",result[i]);
	}
	return 0;
}

