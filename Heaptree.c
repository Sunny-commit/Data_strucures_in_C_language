#include<stdio.h>
#include<stdlib.h>

int a[25];
int i;

void Swap(int *a,int *b){
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void heapifyMax(int n,int i){
 int largest = i;
 int l= 2*i+1;
 int r= 2*i+2;
 if(l<n && a[l]>a[largest]){
    largest =l;
  }
 if(r<n && a[r]>a[largest]){
    largest =r;
  }
  if(largest!=i){
    Swap(&a[i],&a[largest]);
    heapifyMax(n,largest);
  }
}

void buildMaxHeap(int n){
 for( i=(n/2)-1;i>=0;i--){
   heapifyMax(n,i);
 }
}

void heapifyMin(int n,int i){
 int smallest =i;
 int l= 2*i+1;
 int r= 2*i+2;
 if(l<n && a[l]<a[smallest]){
    smallest =l;
  }
 if(r<n && a[r]<a[smallest]){
    smallest =r;
  }
  if(smallest!=i){
    Swap(&a[i],&a[smallest]);
    heapifyMin(n,smallest);
  }
}

void buildMinHeap(int n){
 for( i=(n/2)-1;i>=0;i--){
   heapifyMin(n,i);
 }
}


void HeapSortD(int n){
  for( i=(n/2)-1;i>=0;i--){
   heapifyMin(n,i);
 }
  for(i=n-1;i>=0;i--){
  Swap(&a[0],&a[i]);
  heapifyMin(i,0);
 }
}

void HeapSortA(int n){
  for(i=(n/2)-1;i>=0;i--){
   heapifyMax(n,i);
 }
  for( i=n-1;i>=0;i--){
  Swap(&a[0],&a[i]);
  heapifyMax(i,0);
 }
}

void Display(int n){
  for( i=0;i<n;i++){
   printf("%d ",a[i]);
 }
  printf("\n");
}

void main(){
  int n,key=1;

  while(1){
    int choice;
    printf("\nEnter\n0.for Exit\n1.Entering Values\n2. Creating MinHeapTree\n3. Creating MaxHeapTree\n4.maxheap sort\n5.MInheap sort\n");
    printf("\nEnter ur choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 0: 
               exit(0);
        case 1: printf("Enter no.of elements: "); 
                scanf("%d",&n);
                printf("Enter the values of the tree :" );
                for(i=0;i<n;i++){
                  scanf("%d",&a[i]);
                }
                break;       
        case 2: buildMinHeap(n);
                Display(n);
                break;
        case 3: buildMaxHeap(n);
                Display(n);
                break;
        case 4: HeapSortA(n);
                printf("maxheap sort: ");
                Display(n);
                break;
        case 5: HeapSortD(n);
                printf("Minheapsort: ");
                Display(n);
               break;
                     
    }
  }
}
