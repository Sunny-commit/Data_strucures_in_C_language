#include<stdio.h>
void prime(int n);
int main(){
	prime(7);
	return 0;
}
void prime(int n){
	int i;
	int count=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			count += 1;
		}
	}
	if(count==2){
		printf("is a prime number");
	}	
	
}
