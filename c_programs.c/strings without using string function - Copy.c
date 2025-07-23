#include<stdio.h>
int main(){
	char arr[100];
	int length=0,i;
	printf("enter a string:");
	gets(arr);
	puts(arr);
	for(i=0;arr[i]!='\0';i++){
		length++;
	}
	printf("%s length is %d",arr,length);
}
