#include<stdio.h>

void Merge(int a[],int l,int mid,int h){
 int i,j,k,n1,n2;
 n1= mid+1 -l;
 n2= h - mid;
 int L[n1],R[n2];
 for(i=0;i<n1;i++){
    L[i]=a[i+l];  }
 for(j=0;j<n2;j++){
    R[j]=a[mid+1+j];  }
    i=0,j=0,k=l;
  while(i<n1 && j<n2 ){
    if(L[i] < R[j])
      a[k++] = L[i++];
    else
      a[k++] = R[j++];
    }
  while(i<n1){
    a[k++] = L[i++];  }
  while(j<n2){
    a[k++] = R[j++];  }    
}

void MergeSort(int a[],int l,int h){
 int mid;
 if(l<h){
  mid = (l+h)/2;
  MergeSort(a,l,mid);
  MergeSort(a,mid+1,h);
  Merge(a,l,mid,h);
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
    int l=0,h=n-1; 
   MergeSort(a,l,h);
   printf("\nThe sorted array is :\n");
   for(i=0;i<n;i++){
     printf("%d ",a[i]);
    }  
   printf("\n");
}
