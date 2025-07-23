//#include<stdio.h>
//int main(){
//	int i,sum=0,product=1;
//	int arr[10];
//	printf("enter array values:");
//	for(i=0;i<10;i++){
//		scanf("%d",&arr[i]);
//		sum=arr[i]+sum;
//		product=arr[i]*product;
//	}
//	printf("sum of array elements are%d",sum);
//	printf("product of array elements are %d",product);
//}
#include<stdio.h>
int main(){
	int arr[10],ele;
	int i,j,count,k,temp;
	for(i=0;i<10;i++){
		printf("Enter a number : ");
		scanf("%d",&arr[i]);
	}
	for (i=0;i<10;i++){
		ele = arr[i];
		count = 0;
		temp = 0;
		for (k=0;k<=i;k++){
			if (arr[k] == ele){
				temp ++;
			}
		}
		if (temp==1){
			for (j = 0;j<10;j++){
				if (ele == arr[j]){
					count += 1;	
				}
			}
			printf("No.of times %d repeated is : %d\n",ele,count);
		}
	}
}


