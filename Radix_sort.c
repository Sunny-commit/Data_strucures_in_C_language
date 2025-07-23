//Radix sort
#include<stdio.h>

int getMax(int a[],int n){
 int  maxIndex = 0;
  for(int i=1;i<n;i++){
   if(a[i]>a[maxIndex])
     maxIndex= i;     
  }
  return a[maxIndex];
}

void CountingSort(int a[],int n,int place){
 int max,i,output[n];
 max= (a[0]/place)%10;
 for(int i=1;i<n;i++){
   if((a[i]/place)%10 > max)
     max = (a[i]/place)%10;
 }
 int count[max+1];
 for( i=0;i< max+1 ;i++){
  count[i]=0; }
 for(i=0;i<n;i++){
  count[(a[i]/place)%10]++; } 
 for( i=1;i< max+1 ;i++){
  count[i]+=count[i-1]; }
  for(i=n-1;i>=0;i--){
    output[count[(a[i]/place)%10]-1]=a[i];
    count[(a[i]/place)%10]--;
  }
  for(i=0;i<n;i++){
   a[i]=output[i];
    }

}
void RadixSort(int a[],int n){
  int Max = getMax(a,n);
  for(int place = 1;Max/place>0;place*=10){
   CountingSort(a,n,place);
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
   RadixSort(a,n);
   printf("\nThe sorted array is :\n");
   for(int i=0;i<n;i++){
     printf("%d ",a[i]);
    }  
   printf("\n");

   }
