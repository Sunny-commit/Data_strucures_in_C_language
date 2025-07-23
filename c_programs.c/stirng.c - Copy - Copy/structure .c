#include<stdio.h>
	struct student{
		char name[20];
		int id;
	};
	int main(){
	int n,i;
	printf("enter n value:");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++){
		printf("enter name:");
		scanf("%s",&s[i].name);
		printf("enter id:");
		scanf("%d",&s[i].id);
	}	
printf("displaying the students data:\n");
for(i=0;i<n;i++){
	printf("%s",s[i].name);
	printf("%d",s[i].id);
}
}
