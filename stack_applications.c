#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 50
int top=-1;
int st[MAX];
char s[MAX];
char o[MAX];
/*((a*(b+c))/(d-f)%e)*/
int pr(char c){
	if(c=='^')
	return 3;
	else if(c=='/'||c=='*'||c=='%')
	return 2;
	else if(c=='+'||c=='-')
	return 1;
	else 
	return -1;
}
void push(char x)
{
	
	if(top==MAX-1)
	printf("stack is full");
	else 
	{
		top=top+1;
		s[top]=x;
	}
}
char pop()
{
	char b;
	if(top==-1)
	printf(" stack is empty\n");
	else{
		 b=s[top];
		top=top-1;
	}
	return b;
}


void prefix(char c[]){
	int l=0;
	while(s[l]!='\0'||o[l]!='\0'){
		s[l]='\0';
		o[l]='\0';
		l++;
	}
	strrev(c);
	int i,k=0;
	char p;
	for(i=0;i<strlen(c);i++){
		if(c[i]==')')
		push(c[i]);
		else if(isalnum(c[i]))
		o[k++]=c[i];
		else if(c[i]=='('){
			while(top!=-1&&s[top]!=')')
			o[k++]=pop();
			
			p=pop();
		}
		else{
			while(top!=-1&&(pr(c[i])<pr(s[top])))
		
			o[k++]=pop();
			
			push(c[i]);
		}
		
	}

	if(c[i]=='\0'){
	
		while(top!=-1)
		{
			
			o[k++]=pop();
		}
	}
	puts(strrev(o));
	return strrev(o);	
}

void postfix(char c[]){
	int l=0;
	while(s[l]!='\0'||o[l]!='\0'){
		s[l]='\0';
		o[l]='\0';
		l++;
	}
	int i,k=0;
	char p;
	for(i=0;i<strlen(c);i++){
		if(c[i]=='(')
		push(c[i]);
		else if(isalnum(c[i]))
		o[k++]=c[i];
		else if(c[i]==')'){
			while(top!=-1&&s[top]!='(')
			o[k++]=pop();
			
			p=pop();
		}
		else{
			while(top!=-1&&(pr(c[i])<=pr(s[top])))
		
			o[k++]=pop();
			
			push(c[i]);
		}
		
	}
	if(c[i]=='\0'){
	
		while(top!=-1)
		{
			
			o[k++]=pop();
		}
	}
	puts(o);
	return o;
}


void push_(char x)
{
	
	if(top==MAX-1)
	printf("stack is full");
	else 
	{
		int value;
		printf("enter the value of '%c'",x);
		scanf("%d",&value);
		st[++top]=value;
	}
}
int op2(char c){
	if(c=='+')
	{st[top-1]=st[top]+(st[top-1]);
	top=top-1;
	}
	else if(c=='-')
	{st[top-1]=st[top]-(st[top-1]);
	top=top-1;
	}
	else if(c=='*')
	{st[top-1]=st[top]*(st[top-1]);
	top=top-1;
	}
	else if(c=='/')
	{if((st[top-1])==0)
	{
		printf("infinte");
	
	}else
	{
		st[top-1]=st[top]/(st[top-1]);
	top=top-1;
	}
	}
	else if(c=='%')
	{st[top-1]=st[top]%(st[top-1]);
	top=top-1;
	}
}

void pre_evalution(char ex[]){
	int i=0;
	char ch=ex[i];
	while(ch!='\0'){
		if(isalnum(ch))
		push_(ch);
		else if(!isalnum(ch))
		op2(ch);
		if(ch=='/')
	{if((st[top-1])==0)
	{
		break;
		}	
	}
		ch=ex[++i];
		if(ch=='\0')
		  printf("output is %d",st[top]);	
		 /* printf("output is %d",st[top]);*/
	}
	}


int op(char c){
	if(c=='+')
	{st[top-1]=st[top-1]+(st[top]);
	top=top-1;
	}
	else if(c=='-')
	{st[top-1]=st[top-1]-(st[top]);
	top=top-1;
	}
	else if(c=='*')
	{st[top-1]=st[top-1]*(st[top]);
	top=top-1;
	}
	else if(c=='/')
	{if((st[top])==0)
	{
		printf("infinte");
	
	}else
	{
		st[top-1]=st[top-1]/(st[top]);
	top=top-1;
	}
	}
	else if(c=='%')
	{st[top-1]=st[top-1]%(st[top]);
	top=top-1;
	}
}

void post_evalution(char ex[]){
	int i=0;
	char ch=ex[i];

	while(ch!='\0'){
	
		if(isalnum(ch))
		push_(ch);
		else if(!isalnum(ch))
		op(ch);
	if(ch=='/')
	{if((st[top])==0)
	{
		break;
		}	
	}
		ch=ex[++i];
		if(ch=='\0')
		  printf("output is %d",st[top]);

	
	}
	
}
void display_the_list(){
	printf("1--to prefix\n2--to postfix\n3--prefix_evalution\n4--postfix_evalution\n-1--to exit\n\n");}
void list_of_operations(int n){

    while(n!=-1){
    printf("enter the expression");
	char ex[MAX];
	scanf("%s",ex);
	char b[MAX],d[MAX];
    switch (n)
    {
    case 1:
        prefix(ex);
        break;
    case 2:
    	postfix(ex);
        break;
	case 3:
    	prefix(ex);
    	pre_evalution(o);
        break;
    case 4:
    	 postfix(ex);
    	post_evalution(o);
        break;   
    default:
        printf("Invalid input...\n");
        break;
    }
    printf("\n \n Please enter respective number to perform the operation ...: ");
    scanf("%d",&n);
    printf("\n");
    }
}
int main()
{
display_the_list();
    printf("Please enter respective number to perform the operation ...:");
    int n;
    scanf("%d",&n);
    printf("\n");
    list_of_operations(n);
}
