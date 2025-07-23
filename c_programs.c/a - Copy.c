#include<stdio.h>
int main(){
	int i,j,m=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
				printf("\n");
		}
		for(j=1;j<=(i-1);j++){
			printf("%d",m++);
				printf("\n");
		}
	}
}
