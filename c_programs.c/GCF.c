#include<stdio.h>
int main(){
	printf("GCD of  a number :\n");
	int n1,n2,i ,gcd;
	printf("enter a number:");
	scanf("%d %d",&n1,n2);
	for(i=1;i<=n1 && i<=n2;++i){
		if(n1%i==0 &&n2%i==0){
			gcd=i;
		}
	}
		printf("gcd is %d %d %d",n1,n2,gcd);
		return 0;
}
