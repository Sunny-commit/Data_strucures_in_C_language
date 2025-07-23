#include<stdio.h>
//pointers:a variable that stores the memory address of another variable------------------------------------------------
//int main(){
//	int age=22;
//	int*ptr=&age;
//	int ages=*ptr;
//	printf("%d",ages);
//	return 0;
//}
//int main(){
//	int age=22;
//	int *ptr=&age;
//	printf("%d\n",age);
//	printf("%d\n",*ptr);
//	printf("%d\n",*(&age));
//	return 0;
//}
//-----------------examples of pointer----------------------------------------------------------------------------------------------------------------
//int main(){
//	int x;
//	int *ptr;
//	ptr=&x;
//	*ptr=0;
//	printf("x=%d\n",x);
//	printf("*ptr=%d\n",*ptr);
//	*ptr+=5;
//	printf("x=%d\n",x);
//	printf("*ptr=%d\n",*ptr);
//	
//	
//	return 0;
//}
//---------------------pointer to pointer examples --------------------------------------------------------------------
//syntax
//int **pptr;
//char **pptr;
//float**pptr;
//int main(){
//	float price=100.0;
//	float *ptr=&&price;
//	float **pptr=&ptr;
//}
//find the value of i from its pointer to pointer------------
//int main(){
//	int i=5;
//	int *ptr=&i;
//	int **pptr=&ptr;
//	printf("%d\n",**pptr);
//	return 0;
//}
//-----------------swaping of two njumbers----------------------------
void swap(int a,int b);

int main(){
	int t=0;
	swap(5,6);
return 0;		
	
	
	
	
	
}
void swap(int a,int b){
	int t=a;
	a=b;
	b=t;
	printf("a=%d&b=%d\n",a,b);
}






