#include<stdio.h>
int main(){
	char arr[10],n,c=0;
	int i;
	printf("enter a character:");
	gets(arr);
	printf("\nenter the charaaaacter you want to count:");
	scanf("%c",&n);
	for(i=0;arr[i]!=0;i++)
	{
		if(arr[i]==n)
			c++;
	}
	printf("\n total=%d",c);
	return 0;
}
