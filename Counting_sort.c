#include<stdio.h>


int getMax(int a[],int n){
 int  maxIndex = 0;
  for(i=1;i<n;i++){
   if(a[i]>a[maxIndex])
     maxIndex= i;     
  }
  return a[maxIndex];
}
void CountingSort(int a[],int n){
 int output[n];
 int max=getMax(a,n);
 int count[max+1];
 int i;
 for(i=0;i< max+1 ;i++){
  count[i]=0;   
   } 
  for(i=0;i<n;i++){
  count[a[i]]++;    
  } 
 for(i=1;i< max+1 ;i++){
  count[i]+=count[i-1];
   }
 for(i=n-1;i>=0;i--){
  output[count[a[i]]-1] = a[i];
  count[a[i]]--;   
  }
 for(i=0;i<n;i++){
   a[i]=output[i]; 
   }
}

void main(){
 int n;
  printf("\nEnter no.of elements of array: ");
   scanf("%d",&n);
   int a[n],i;
   printf("Enter the elements of array: \n");
    for(i=0;i<n;i++){
     scanf("%d",&a[i]);
    }
    printf("Entered array is :\n");
   for(i=0;i<n;i++){
     printf("%d ",a[i]);
    } 
   CountingSort(a,n);
   printf("\nThe sorted array is :\n");
   for(i=0;i<n;i++){
     printf("%d ",a[i]);
    }  
   printf("\n");
   }
