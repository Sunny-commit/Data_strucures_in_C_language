#include <stdio.h>

int main()
{
	int i, j, rows, columns, trace = 0;

	printf("Enter Matrix Rows and Columns =  ");
	scanf("%d %d", &rows, &columns);

	int Tra_arr[rows][columns];

	printf("Please Enter the Matrix Items =  \n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			scanf("%d", &Tra_arr[i][j]);
		}
	}
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			printf("%d", Tra_arr[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			if (i == j)
			{
				trace = trace + Tra_arr[i][j];
			}
		}
	}

	printf("The Trace Of the Matrix = %d\n", trace);
}  


/*
int main(){  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
printf("enter the number of row=");    
scanf("%d",&r);    
printf("enter the number of column=");    
scanf("%d",&c);    
printf("enter the first matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("enter the second matrix element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)     
{    
scanf("%d",&b[i][j]);    
}    
}    
    
printf("multiply of the matrix=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
//for printing result    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
return 0;  
}     */   

/*

// fibonacci() funtion definition
int fibonacci(int num)
{
    // first base condition check
    if (num == 0)
    {
        return 0; // retuning 0, if condition meets
    }
    // second base condition check
    else if (num == 1)
    {
        return 1; // returning 1, if condition meets
    }
    // else calling the fibonacci() function recursively till we get to the base conditions
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2); // recursively calling the fibonacc() function and then adding them
    }
}

int main()
{
    int num; // variable to store how many elements to be displayed in the series
    printf("Enter the number of elements to be in the series : ");
    scanf("%d", &num); // taking user input
    int i;
    for (i = 0; i < num; i++)
    {
        printf("%d, ", fibonacci(i)); // calling fibonacci() function for each iteration and printing the returned value
    }

    return 0;
}




*/







 

/*
// Tower of Hanoi program in C using Recursion
void toH(int n, char rodA, char rodC, char rodB)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c",rodA ,rodC );
		return;
	}
	toH(n-1, rodA, rodB, rodC);
	printf("\n Move disk %d from rod %c to rod %c", n, rodA, rodC);
	toH(n-1, rodB, rodC,rodA);
}

int main()
{
	int no_of_disks ;
	printf("Enter number of disks: ");
	scanf("%d", &no_of_disks);
	toH(no_of_disks, 'A','C','B'); 
	return 0;

}
 
 
    */

/*
#include<math.h>
unsigned int GCD(unsigned i, unsigned j);
int main(){
   int a,b;
   printf("Enter the two integers: ");
   scanf("%d%d",&a,&b);
   printf("GCD of %d and %d is %d",a,b,GCD(a,b));
   return 0;
}

unsigned int GCD(unsigned i, unsigned j){
   if(j>i)
      return GCD(j,i);
   if(j==0)
      return i;
   else
      return GCD(j,i%j);
} */


/*


struct student {
    char firstName[50];
    int roll;
    float marks;
} s[5];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
} 

*/

/*
struct address
{
 int houseno;
 char street[20];
 int stateno;
};


struct student
{
 char name[30];
 int roll;
 struct address adrs;  
};

int main()
{
 struct student stud;

 printf("Enter name and roll number of student:\n");
 scanf("%s%d",stud.name, &stud.roll);
 printf("Enter street name, house number and state number:\n");
 scanf("%s%d%d",stud.adrs.street, &stud.adrs.houseno, &stud.adrs.stateno);
 printf("Student detail is:\n");
 printf("Name: %s\tRoll: %d\n", stud.name, stud.roll);
 printf("Address:%s, House no. -%d, state: %d",stud.adrs.street, stud.adrs.houseno, stud.adrs.stateno);
 
 return 0;
}               
/*
include<stdlib.h>
int main()
{

 struct node
 {
 	int data;
 	struct node *next;
 	
 } *p,*q,*r,*s;
 p=(struct node*)malloc(sizeof(struct node));
 AQ			QQ
}
*/

