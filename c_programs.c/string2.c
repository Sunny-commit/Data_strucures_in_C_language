#include<stdio.h>
//int main(){
//	printf("demonstration of string:\n");
//	char name[]="chandu";
//	int i=0;
//	while(name[i]!='\0'){
//		printf("%c",name[i]);
//		i++;
//	}
//	return 0;
//}
//***C permits empty string.
//it does not allow an empty character.
//int main(){
//	printf("enter a character:");
//	char ch[100];
//	gets(ch);
//	puts("hello!");
//	puts(ch);
//	return 0;
//	
//	
//}
#include<string.h>
int main(){
	char s[100]="madam";
	char s1[10]="hello!";
	int len1,len2;
	len1=strlen(s);
	len2=strlen("hello students");
	printf("%d\n",len1);
	printf("%d\n",len2);
	printf("%s\n",strlwr(s));
	strncat(s1,s,3);
	printf("%s\n",s);
	printf("%s\n",s1);
		strncpy(s1,s,3);
	printf("%s\n",s);
	printf("%s\n",s1);
	//strcmp;
	//strncmp;
	char x;
	strcpy(x,s);
		char d;
	d=strcmp(x,s);
	d=strcmp(x,s);
	if(d==0){
		prntf("%s is a palindrome",x);
	}
	
	
	
	
	
	
	
	
	
	
	
}



