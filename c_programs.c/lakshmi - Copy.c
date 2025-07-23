#include<stdio.h>
int main(){
	int n,j,i,count=0;
	printf("enter n value:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]==a[j]){
				count++;
				break;
		}
		}
		printf("the number %d repeated in %d",i,count);
	}
}
