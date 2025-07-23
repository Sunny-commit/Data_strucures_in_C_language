#include<stdio.h>

void Swap(int *a,int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void SelectionSort(int a[],int n){
 int i,j,minIndex;
 for(i=0;i<n;i++){
   minIndex = i;
   for(j=i+1;j<n;j++){
     if(a[j]<a[minIndex]){
       minIndex = j;   }
   }
   Swap(&a[i],&a[minIndex]);
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
    SelectionSort(a,n);
   printf("\nThe sorted array is :\n");
   for(i=0;i<n;i++){
     printf("%d ",a[i]);
    }  
   printf("\n");
}
