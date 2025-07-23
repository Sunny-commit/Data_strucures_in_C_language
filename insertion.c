//insertion sort
#include<stdio.h>

void InsertionSort(int a[],int n){
 int i,j,key;
 for(i=1;i<n;i++){
   key=a[i];
   j=i-1;
   while(j>=0 && a[j]>key){
    a[j+1]=a[j];
    j=j-1;
   }
   a[j+1]=key;
 }

}

void main(){
 int n;
  printf("\nEnter no.of elements of array: ");
   scanf("%d",&n);
   int a[n];
   printf("Enter the elements of array: \n");
   int i;
    for(i=0;i<n;i++){
     scanf("%d",&a[i]);
    }
    printf("Entered array is :\n");
   for(i=0;i<n;i++){
     printf("%d ",a[i]);
    }  
   InsertionSort(a,n);
   printf("\nThe sorted array is :\n");
   for(i=0;i<n;i++){
     printf("%d ",a[i]);
    }  
   printf("\n");
}
