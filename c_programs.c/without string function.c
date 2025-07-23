#include<stdio.h>
//to find the length of the string
//int main(){
//	char arr[100];
//	int length=0,i;
//	printf("enter a string:");
//	gets(arr);
//	puts(arr);
//	for(i=0;arr[i]!='\0';i++){
//		length++;
//	}
//	printf("%s length is %d",arr,length);
//}
//int main(){
//	char arr[100];
//	printf("enter a name:");
//	gets(arr);
//	puts(arr);
//	int length=0,i;
//	for(i=0;arr[i]!='\0';i++){
//		length;
//	}
//	printf("%d",length);
//	for(i=0;i<=length;i++){
//		if((arr[i]>='a') && (arr[i]<='z')){
//			arr[i]=arr[i]-32;
//		}
//	}
////	printf(" upper case is %s",arr);
////}
//int main(){
//	char arr[100];
//	printf("enter a uppercase letter name:");
//	gets(arr);
//	puts(arr);
//	int length=0,i;
//	for(i=0;arr[i]!='\0';i++){
//		length++;
//	}
//	for(i=0;i<=length;i++){
//		if((arr[i]>='A') &&(arr[i]<='Z')){
//			arr[i]=arr[i]+32;
//		}
//	}
//	printf("%s",arr);
////}
//int main(){
//	char pre[100],suffix[100],arr[100];
//	printf("enter pre and suffix names:");
//	gets(pre);
//	int i=0,j=0;
//	puts(pre);
//	gets(suffix);
//	puts(suffix);
//	while(pre[i]!='\0'){
//		arr[i]=pre[i];
//		i++;
//		j++;
//	}
//	i=0;
//	while(suffix[i]!='\0'){
//		arr[j]=suffix[i];
//		i++;
//		j++;
//	}
//	arr[j]='\0';
//	printf("over all word is:");
//	puts(arr);
//	return 0;
//}
int main(){
	char arr[100];
	int i,j,temp;
	puts("enter a string");
	gets(arr);
	puts(arr);
	j=strlen(arr)-1;
	while(i<j){
		temp=arr[j];
		arr[j]=arr[i];;
		arr[i]=temp;
		i++;
		j--;
	}
	puts(arr);
}











































