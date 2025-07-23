//#include<stdio.h>
//int main(){
//	int i,j,n;
//	printf("enter n :");
//	scanf("%d",&n);
//	int mat[n][n];
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			scanf("%d",&mat[i][j]);
//		}
//	}
//	int trace=0;
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			if(i==j){
//				trace=trace+mat[i][j];
//			}
//		}
//	}
//	printf("trace is %d",trace);
//}
//#include<stdio.h>
//int fib(int);
//int main(){
//	int n,i;
//	printf("no.of terms:");
//	scanf("%d",&n);
//	for(i=0;i<n;i++){
//		printf("fib is %d\n",fib(i));
//	}
//}
//int fib(int n){
//	if(n==0)
//		return 0;
//	else if(n==1)
//		return 1;
//	else
//		return fib(n-1)+fib(n-2);
//}
#include<stdio.h>
int main(){
	int i,j,n,k;
	printf("enter n:");
	scanf("%d",&n);
	int mat1[n][n],mat2[n][n],mat3[n][n];
	printf("enter 1 matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("\n");
		printf("enter 2 matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&mat2[i][j]);
		}
	}
/*	printf("multiplication is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",mat3[i][j]=mat1[i][j]*mat2[i][j]);
		}
		printf("\n");
	}*/
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		mat3[i][j]=0;
		for(k=0;k<n;k++){
			mat3[i][j]=mat1[i][k]*mat2[k][j];
		}
	}
		for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",mat3[i][j]);
		}
		printf("\n");
	}
}




}
