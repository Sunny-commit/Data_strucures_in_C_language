#include<stdio.h>
int main(){
/*	int n;
	printf("enter number:");
	scanf("%d",&n);
	if(n%2==0){
		printf("is a even  number");
	}
	else{
		printf("is a odd number");
	}
	printf("check vowels or not ");
	char n;
	printf("enter a character of alphabets:");
	scanf("%c",&n);
	if((n=='a' || n=='e' || n=='i' || n=='o' || n=='u')|| (n=='A' || n=='E'|| n=='I'|| n=='O' || n=='U')){
		printf("is a vowel");
	}
	else{
		printf("is a alphabet");
	}
}*/
printf("to find fibonacci sequence");
	int n;
	int i;
	printf("enter no of digits:");
	scanf("%d",&n);
	int t1=0;
	int t2=1;
	printf("first t1 and t2 terms are %d and %d ",t1,t2);
	int z=t1+t2;
	for(i=2;i<n;i++){
		printf("%d",z);
		t1=t2;
		t2=z;
		z=t1+t2;
	}
	return 0;
}
