//shell sort
#include<stdio.h>

void ShellSort(int a[],int n){
int interval,i,j,temp;
for(interval=n/2;interval>0;interval/=2){
  for(i=interval;i<n;i++){
    temp = a[i];
    for(j=i;(j>=interval && a[j-interval]>temp);j-=interval){
     a[j] = a[j-interval];
     }
    a[j]=temp;
  }
 }
}

void main(){
 int n;
  printf("\nEnter no.of elements of array: ");
   scanf("%d",&n);
   int a[n];
   printf("Enter the elements of array: \n");
    for(int i=0;i<n;i++){
     scanf("%d",&a[i]);
    }
    printf("Entered array is :\n");
   for(int i=0;i<n;i++){
     printf("%d ",a[i]);
    } 
   ShellSort(a,n);
   printf("\nThe sorted array is :\n");
   for(int i=0;i<n;i++){
     printf("%d ",a[i]);
    }  
   printf("\n");

   }
