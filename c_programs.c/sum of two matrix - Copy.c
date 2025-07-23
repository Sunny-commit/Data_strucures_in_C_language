#include<stdio.h>
int main(){
	int i,j;
int a[3][3],b[3][3],result[3][3];
printf("enter the values of 1st matrix:");
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("enter value of a%d%d:",i+1,j+1);
		scanf("%d",&a[i][j]);
	}
printf("enter the values of the second matrix:");
for(i=0;i<3;++i){
	for(j=0;j<3;++j){
		printf("enter vlue of b%d%d:",i+1,j+1);
		scanf("%d",&b[i][j]);
	}
}
/*sum of the matrix*/
for(i=0;i<3;++i){
	for(j=0;j<3;++j){
		 result[i][j]=a[i][j]+b[i][j];
	}
}
for(i=0;i<3;++i){
	for(j=0;j<3;++j){
		printf("%d\t",result[i][j]);
		if(j==1)
			printf("\n");
	}
	return 0;
}
	
	
	
	
	
}
	
	
	
	
	
	
	
	
	
	
}
