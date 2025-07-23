#include<stdio.h>
#include<stdlib.h>
#define max 50
int st[max];
int s[max];
int o[max];
int top=-1;
void push(int value){
	if(top>=max-1){
		printf("overflow");
	}
	else{
		top=top+1;
		st[top]=value;
	}
}
char pop(){
	if(top==-1){
		printf("underflow");
	}
	else{
		char b;
		b=st[top];
	}
	return b;
}
void prefix(char c[]){
	strrev(c);
	int l,k;
	for(i=0;i<strlen(c);i++){
		if(c[i]==')'){
			push(c[i]);
		}
		else if(isalnum(c[i])){
			o[k++]=c[i];
		}
		else if(c[i]=='('){
			while(top!=-1 && st[top]!=')'){
				o[k++]=pop();
				p=pop();
			}
		}
		else{
			while(top!=-1 && pr(c[i])<pr(st[top])){
				o[k++]=pop();
				push(c[i]);
			}
		}
	}
}
