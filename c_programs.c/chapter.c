#include<stdio.h>
void main(){
/*	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a>0){
		printf("%d is a positive number",a);
	}*/
/*	printf("to check the give n number os odd or even\n");
	int a;
	printf("ente a number:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is a even number \n",a);
		
	}
	else{
		printf("%d is odd number",a);
	}
*/
/*int a;
printf("enter year:");
scanf("%d",&a);
if(a%4==0 && a%400==0 && a%100!=0)
{
	printf("is a leap year");
	}	
else{
	printf("is not a leap year");
}
	*/
	/*int a,b,c;
	printf("enter a,b,c values:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c){
			printf("%d is a bid",a);
		}
		else{
			printf("%d is big",c);
		}
	}
	else{
		if(b>c){
			printf("%d is big",b);
		}
		else{
			printf("%d is big",c);
		}
	}

	*/
int choice;
int a,b;
printf("simple calculator\n");
printf("------------------");
printf("1.addition\n2.subteraction\n3.multiplication\n4.divison");
printf("enter your choice(1:4)");
scanf("&d",&choice);
printf("enter a,b values");
scanf("%d %d",&a,&b);
switch(choice)
{
	case 1:
		printf("%d+%d=%d\n",a,b,a+b);
		break;

	case 2:
		printf("%d-%d=%d\n",a,b,a-b);
		break;
	case 3:
		printf("%d*%d=%d\n",a,b,a*b);
		break;
	case 4:
		printf("%d/%d=%d\n",a,b,a/b);
	default:
		printf("jnvalid choice.......!");
}

/*int n=1;
while(n<=10)
{
	printf("%d\n",n);
	n++;
}
*/
/*int a,rem;
printf("enter number:");
scanf("%d",&a);
printf("the reversed number is");
while(a!=0)
{
	 rem=a%10;
	 printf("%d",rem);
	 a=a/10;
}

*/
/*int a,rem,sum=0,temp;
printf("Enter your number:");
scanf("%d",&a);
temp=a;
while(a!=0)
{
	rem=a%10;
	sum=sum+(rem*rem*rem);
	a=a/10;
}
if(sum==temp)
{
	print("%d is a armstrong num",temp);
}
else{
	printf("%d is not a armstrong \n ")
}

*/
/*int a,i,j,k=1;
printf("enter number of rows:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
	for(j=1;j<=i;j++)
	{
	printf("%d",k++);
}
printf("\n");
}


int a,i=1;
printf("enter the number ta;e you want to print:");
scanf("%d",&a);
table:
	printf("%d X %d =%d\n",a,i,a*i);
	i++;
	if(i<=10)
	{
		goto table;
	}
}
*/
}
