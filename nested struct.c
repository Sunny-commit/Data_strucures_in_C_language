#include<stdio.h>
#include<stdlib.h>
struct dob{
	int date;
	int day;
}dob;
struct student{
	int roll;
	char name[20];
	struct  dob;

};
int main(){
	struct student s;
	printf("enter roll no:");
	scanf("%d\n",&s.roll);
	printf("enter name:");
	scanf("%s\n",&s.name);
	printf("enter date:");
	scanf("%d",&s.dob.date);
	
}
