#include<stdio.h>
#include<string.h>
//int main(){
//	char str[100];
//	printf("enter a string");
//	gets(str);
//	puts(str);
//	int i=0;
//	int j=0;
//	int temp;
//	j=strlen(str)-1;
//	while(i<j){
//		temp=str[j];
//		str[j]=str[i];
//		str[i]=temp;
//		i++;
//		j--;
//	}
//	printf("%s",str);
//	return 0;
//}
int main(){
	char str[100];
	char sub_string[50];
	printf("enter the string name");
	scanf("%s",&str);
	int n,i=0
	;
	printf("enter no of characters for substring\n");
	gets(n);
	while(str[i]!='\0' && i<n){
		sub_string[i]=str[i];
		i++;
	}
	sub_string[i]='\0';
	puts(sub_string);
	
}
