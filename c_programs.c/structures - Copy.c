//structures------------------------------------
#include<stdio.h>
#include<string.h>
//struct student{
//	int roll;
//	float cgpa;
//	char name[100]
//};
//int main(){
//	struct student s1;
//	s1.roll=1664;
//	s1.cgpa=9.2;
//	s1.name[100]="chandu";
//	printf("student name=%s\n",s1.name);
//	printf("student roll no=%d\n",s1.roll);
//	printf("student cgpa=%f\n",s1.cgpa);
//	struct student s2;
//	s2.roll=1662;
//	s2.cgpa=9.1;
//	s2.name[100]="sunny";
//	printf("student name=%s\n",s2.name);
//	printf("student roll no=%d\n",s2.roll);
//	printf("student cgpa=%f\n",s2.cgpa);
//	return 0;
//}
//initialization of structues-----------------------------------------
//struct students1={"chandu",1664,7.9};
//struct student s2={"chandu",1552,8.8};
//struct s3={0};
//------------------------------------pointers to structures---------------------------------------------
//struct student s1;
//struct student *ptr;
////ptr=&s1;
////examples of pointer to structures-----------------------------------
//struct student s1={1664,9.2,"chandu"};//roll no,cgpa,name:
//struct student *ptr=&s1;
//printf("student roll=%d\n",(*ptr).roll);
////arrow operator is used for coding is indicated as->name,roolno etc.
////passing structure t0 function----------------------------------------------- 0
////function prototype
////void printinfo(struct student s1);
//void printinfo(struct student s1);
//int main(){
//	struct student s1 ={1664,9.2,"chandu"};
//	printinfo(s1);
////	printinfo(struct student s1);
//}
//void printinfo(struct student s1){
//	printf("enter information");
//	printf("roll no is :%d\n",s1.rollno);
//	printf("cgps is %f",s1.cgpa);
//	printf("name is %c",s1.name);
//}
//-------------------------------------------------------------------------------------------------------
//typedef keyword:used to alias for data type------------------
typedef struct student{
	int roll;
	float cgpa;
	char name[100];
} coe;
int main(){
	coe s1;
	s1.roll=1543;
	s1.cgpa=34.1;
	strcpy(s1.name,"chandu");
	printf("student name is %s\n",s1.name);
}





