#include<stdio.h>
//int main(){
//	char ch;
//	printf("enter a charchter:");
//	scanf("%c",&ch);
//	if((ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') || (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')){
//		printf("is a vowel");
//	}
//	else if ((ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9'||ch=='0')){
//		printf("is a constant");
//	}
//	else{
//		printf("is a symbol");
//	}
////}
//int main(){
//	int i,n;
//	printf("enter n value:");
//	scanf("%d",&n);
//	while(i!=1){
//		n=n*(n-1);
//		--i;
//	}
//	printf("factorial is %d",n);
//	

int main(){
	int i;
	int n;
	int n1=0;
	int n2=1;
	int next=n1+n2;
	printf("fibonacci series are:%d,%d",n1,n2);
	for(i=3;i<=n;i++){
		printf("%d",next);
		n1=n2;
		n2=next;
		next=n1+n2;
		
	}
}
