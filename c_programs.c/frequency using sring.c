
#include<stdio.h>
int main(){
	char str[1000],c,i;
	int count=0;
	printf("enter a string:");
	gets(str);
	for(c='a';c<='z';c++){
		count=0;
		for( i=0;str[i]!=NULL;i++){
			if(c==str[i])
			count++;
		}
		printf("%c found in%d times\n",c,count);
	}
}
