#include<stdio.h>
/*
void printhello();
void printgoodbye();

int main(){
	printhello();
	printgoodbye();
	printhello();
	return 0;
}
void printhello(){
	printf("hello!\n");
}

	void printgoodbye(){
		printf("good bye");
	}
	*/
//------------------------------------------------------------------------------------------------------------------------------------------------------------------
//void namasta();
//void bonjour();
//int main(){
//printf("enter f for frencea and i for indian");
//char ch;
//scanf("%c",&ch);
//if(ch=='i'){
//	namasta();
//}(//else{
//	bonjour();
//}
//
//}
//void namasta(){
//	printf("namansta");
//	bonjour();
//	
//}
//void bonjour(){
//	printf("bonjour");
//}
//int sum(int a,int b);
//int main(){
//	printf("enter the a and b values:");
//	int a,b;
//	scanf("%d",&a);
//	scanf("%d",&b);
//	printf("sum is %d",sum(a,b));
//	return 0;
//}
//int sum(int a,int b){
//	return a+b;
//}
//void printtable(int n);
//int main(){
//	int n;
//	int i;
//	printf("enter number:");
//	scanf("%d",&n);
//	printtable(n);
//	return 0;
//}
//void printtable(int n){
//	for(int i=1;i<=10;i++){
//		printf("%d",i*n);
//	}
//}
//}
// function can only return one value at a time
//changes to parameters in function don't change the values in calling function.	(because a copy of argument is passed to the function
//void calculateprice(float value);
//int main(){
//	float value=100.0;
//	calculateprice(value);
//	return 0;
//}
//void calculateprice(float value){
//	value=value+(0.18*value);
//	printf("%f",value);
//}
// use library functions to calculate the square of the number taken from the user
void square(int n);
int main(){
	int n,i;
	printf("enter a number:");
	scanf("%d",&n);
	square(n);
	return 0;
}
void square(int n){
	for(i=1;i<=n;i++){
		printf("%d",i*i);
	}
}

