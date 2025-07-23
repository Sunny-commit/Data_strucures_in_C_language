#include<stdio.h>
int isarmstrong(int number){
	int lastdigit=0;
	int power=0;
	int sum=0;
	int n=number;
	while(n!=0){
		lastdigit=n%10;
		power=lastdigit*lastdigit*lastdigit;
		sum+=power;
		n/=10;
	}
	if(sum==number) return 0;
	else return 1;
}
int main()
{
	int number;
	printf("enter number:");
	scanf("%d",&number);
	if(isaarmstrong(number)==0)
		printf("%d is a armstrong.",number);
	else
		printf("%d is not an armstrong number",number);
	return 0;
}
