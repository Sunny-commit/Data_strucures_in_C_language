#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 50
int st[max];
int s[max];
int o[max];
int top=-1;
void push(char value){
	if(top>=max-1){
		printf("overflow");
	}
	else{
		top=top+1;
		s[top]=value;
	}
}
char pop(){
	char b;
	if(top=-1){
		printf("underflow");
	}
	else{
		b=s[top];
		top=top-1;
	}
	return b;
}
int pr(char c){
	if(c=='^'){
		return 3;
	}
	else if(c=='*'||c=='/'||c=='%'){
		return 2;
	}
	else if(c=='+'||c=='-'){
		return 1;
	}
	else{
		return -1;
	}
}
void prefix(char c[]){
	int l=0;
		while(s[l]!='\0'||o[l]!='\0'){
		s[l]='\0';
		o[l]='\0';
		l++;
	}
	strrev(c);
	int i,k;
	for(i=0;i<strlen(c);i++){
		if(c[i]==')'){
			push(c[i]);
		}
		else if(isalnum(c[i])){
			o[k++]=c[i];
		}
		else if(c[i]=='('){
			while(top!=-1 && s[top]!=')'){
				o[k++]=pop();
				int p=pop();
			}
	}
			else{
				while(top!=-1 && pr(c[i])<pr(s[top])){
					o[k++]=pop();
					push(c[i]);
				}
			}
		}
			if(c[i]=='\0'){
		while(top!=-1){
			o[k++]=pop();
		}
	}
	puts(strrev(o));
	return strrev(o);
	}
int main(){
	printf("enter the equation:");
	char c[max];
	scanf("%s",&c);
	prefix(c);
}
