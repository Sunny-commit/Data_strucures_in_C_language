#include<stdio.h>
int main(){
	/*char c;
	for(c='A';c<='Z';c++){
		printf("%c",c);
	}
	return 0;*/
	char c;
	printf("enter u to display uppercase alphabes.\n");
	printf("enter l to display lowercase alphabers.\n");
	scanf("%c",&c);
	if(c=='U' || c=='u'){
		for(c='A';c<='Z';++c)
			printf("%c",c);
	}
	else if(c=='L' || c=='l'){
		for (c='a';c<='z';++c){
			printf("%c",c);
		}	
	}else{
		printf(" error yo entered an invalid syntax");
	}
	return 0;
	}
