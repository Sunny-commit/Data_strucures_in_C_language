#include<stdio.h>
int main(){
	int r,c,i,sum,j;
	printf("enter rows:");
	scanf("%d",&r);
	printf("enter column:");
	scanf("%d",&c);
	printf("enter matrix values:\n");
	int a[r][c];
	for(i=0;i<=r;i++){
		for(j=0;j<=c;j++){
			printf("enter %d%d:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("displaying the matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
