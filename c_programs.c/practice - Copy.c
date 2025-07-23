#include<stdio.h>
//int main(){
//	int testinteger;
//	printf("enter a number:");
//	scanf("%d",&testinteger);
//	printf("number:%d",testinteger);
//	return 0;
//}
//c program to print prime numbrres between two numbers
int main(){
	int a;
	int b;
	int i;
	int s,l;
	printf("enter values of prime numbers you want: ");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>b){
		printf("bigger number is %d\n",a);
		printf("smaller number is %d\n",b);
		s=b;
		l=a;
		for(i=s;i<=l;i++){
		if(i%2==0){
			printf("%d",i);
	}
	}	
	}
	else{
		printf("bigger number is %d\n",b);
		printf("smaller number is %d\n",a);
		s=a;
		l=b;
		for(i=s;i<=l;i++){
		
		}
	}
		
	}
	
	return 0;
}
