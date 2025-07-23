#include<stdio.h>
int main() {
/*	int a;
	int b;
	printf("enter numbers :");
	scanf("%d %d",&a,&b);
	if(a==b) {
		printf("a and b are equal");
		
	}
	else{
		printf(" a and b are not equal");
	}*/
/*	int a;
	printf("enter numbers :");
	scanf("%d",&a);
	if(a%2==0) {
		printf("is a even number");
		
	}
	else{
		printf("is odd number");
	} */
	/*int a;
	printf("enter numbers :");
	scanf("%d",&a);
	if(a>=0) {
		printf("is a positive number");
		
	}
	else{
		printf("is negative number");
	}	*/
/*	int a;
	printf("enter your age :");
	scanf("%d",&a);
	if(a>=18) {
		printf("Congulations! you are eligible to cast your vote ");
		
	}
	else{
		printf("you are not  eligible to cast your vote because your age is %d",a);
	}*/
/*	int m;
	int n;
	printf("enter number:");
	scanf("%d",&m);
	if(m==0) {
		printf("n=0");
	}
	else if(m<0) {
		printf("n=-1");
	}
	else {
		printf("n=1");
	}
	*/
/*	int m;
	int n;
	printf("enter height in centimeter:");
	scanf("%d",&m);
	if(m<=135) {
		printf("is a dwarf");
	}
	else{
		printf("person is  tall ");
	}*/
/*	int a;
	int b;
	int c;
	printf(" enter three number:");
	scanf("%d %d %d",&a, &b, &c);
	if(a>b && a>c)
		printf("a is greatest number");
	
	else if  (b>a && b>c)
		printf("b is greatest number");
	
	else 
		printf("c is greastest number");
	*/
	/*int x;
	int y;
	printf("enter number:");
	scanf("%d %d",&x ,&y);
	if(x>0 && y>0){
		printf ("the coordinate point(%d,%d) lies in 1st quadrant",x,y);
	}
	else if(x<0 && y>0){
		printf ("the coordinate point(%d,%d) lies in 2st quadrant",x,y);
	}
	else if(x<0 && y<0){
		printf ("the coordinate point(%d,%d) lies in 3st quadrant",x,y);
	}
	else if(x>0 && y<0){
		printf ("the coordinate point(%d,%d) lies in 4st quadrant",x,y);
	}
	*/
 /*	int m;
 	int p;
 	int c;
 	scanf("%d,%d,%d",&m ,&p, &c);
 	printf("Maths marks is %d \n",m);
 	printf("physics marks is %d \n",p);
 	printf("chemistry marks is %d \n",c);
 	int totalsum=m+p+c;
 	printf(" total sum is %d \n",totalsum);
 	int total=m+p;
 	printf(" total is %d \n",total);
 	if(m>=65 && p>=55 && c>=50 && totalsum>=190 && total>=140 ){
 		printf("the candidate is eligible for admission");
	 }
	else {
		printf("the candidate is not eligible for admission");
	}
*/
	/*int a;
	int b;
	int c;
	printf("enter the numbers:");
	scanf("%d %d %d",&a, &b, &c);
	int s=((b*b)-(4*a*c));
	printf(" discrimend value is %d\n",s);
	if(s>0){
		printf("Roots are real\n");
		printf("have solutions");
	}
	else if(s==0){
		printf("Rootas are real and equal\n");
		printf("Have solutions");
	}
	else{
		printf("Roots are imaginary\n");
		printf("No solutions");
	}
	*/
/*	int a;
	int b;
	int c;
	char d;
	printf("input the roll no:");
	scanf("input the roll no:%d\n");
	printf("input the name of the student:");
	scanf("%s\n",&d);
	printf("input the marks of the Physivs, Chemistry , computer application marks:");
	scanf("%d %d %d\n",&a, &b, &c);
	int totalMarks=a+b+c;
	printf("total marks:%d\n",totalMarks);
	printf("percentage marks:%d",totalMarks);

*/
/*int a;
printf("enter temperature in your area:");
scanf("%d",&a);
if(a<=0){
	printf("Freezing weather");
	
}
else if(a>0 && a<10){
printf("Very cold weather");
}
else if(a>10 && a<20){
	printf("Cold weather");
}
else if(a>20 && a<30){
	printf("Normal temperature");
}
else if(a>30 && a<40){
	printf("its hot");
}
else {
	printf("its very hot");/*
}
*/
/*
int a;
int b;
int c;
printf("type of triangle:");
scanf("%d %d %d",&a, &b, &c);
if(a==b && b==c && c==a){
	printf("is a equilateral triangle");
}
else if(a!=b && b!=c && c!=a){
	printf("is a scalene triangle");
}
else{
	printf("is a isosceles triangle");
}

*/
/*int a;
int b;
int c;
printf("Angles of the triangle :");
scanf("%d %d %d",&a, &b, &c);
int sum=a+b+c;
printf("the sum of the angles are:%d\n",sum);
if(sum==180){
	printf("the angles can form a triangle");
}	
else{
	printf("the angles cannot form a triangle");
}
*/
/*char c;
printf("enter characacter:");
scanf("%c",&c);
if((c>='a' && c<='z') || (c>='A' && c<='Z')){
	printf("this a alphabet");
}
else if(c>='0' && c<='9'){
	printf("this a digit");
}
else{
		printf("this a special character");
}
*/
char c;
printf("any character:");
scanf("%c",&c);
char a=(c=='a' || c=='e'||c=='i'||c=='o'||c=='u');
char b=(c=='A'|| c=='E'||c=='I'||c=='O'||c=='U');
if(a||b){
	printf("%c are vowels",c);
}
else{
	printf("are consonants",c);
}

return 0;
}












