#include<stdio.h>

int main(){
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("enter the 1st matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("enter the 2st matrix\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
		
	}
	printf("the 1st matrix is\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
		printf(" the 2nd matrix is \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
		printf("totoal sum matrix is\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
		
	}
	
	
	return 0;
	
	
	
}
