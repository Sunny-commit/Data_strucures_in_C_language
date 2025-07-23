//QuickSort
#include<stdio.h>

void Swap(int * a,int * b){
 int temp;
 temp = *a;
 *a = *b;
 *b = temp;
}
int partioning(int a[],int l,int h){
 int i,j,pivot;
 i=l-1,pivot=a[h];
 for(j=l;j<h;j++){
   if(a[j]<pivot){
     i++;
     Swap(&a[i],&a[j]);  }
 }
      Swap(&a[i+1],&a[h]);
  return i+1;
}

void QuickSort(int a[],int l,int h){
  if(l<h){
   int PI;
   PI =partioning(a,l,h);
   QuickSort(a,l,PI-1);
   QuickSort(a,PI+1,h);
  }
}

void main(){
 int n,l,h;
  printf("\nEnter no.of elements of array: ");
   scanf("%d",&n);
   int a[n];
   int i;
   printf("Enter the elements of array: \n");
    for(i=0;i<n;i++){
     scanf("%d",&a[i]);
    }
    printf("Entered array is :\n");
   for(i=0;i<n;i++){
     printf("%d ",a[i]);
    } 
   l=0;h=n-1;
   QuickSort(a,l,h);
   printf("\nThe sorted array is :\n");
   for(i=0;i<n;i++){
     printf("%d ",a[i]);
    }  
   printf("\n");

   }
