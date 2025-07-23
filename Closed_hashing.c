//closedHashing
#include<stdio.h>
#define SIZE 7

int a[SIZE],hkey,value,key=1,i,choice;

void traversal(){
	int i;
  for(i=0;i<SIZE;i++){
    printf("%d\n",a[i]);
 }
}
//linear probing..
void insertionLP(int value){
  hkey=value%SIZE;
 for(i=0;i<SIZE;i++){
   if(a[(hkey+i)%SIZE]==-1){
     a[(hkey+i)%SIZE]=value;
     break;    }
 }
 if(i==SIZE){
   printf("Space is not available in HashTable..\n"); }
 traversal();
}

void deletionLP(int value){
  hkey=value%SIZE;
 for(i=0;i<SIZE;i++){
   if(a[(hkey+i)%SIZE]==value){
     a[(hkey+i)%SIZE]=-1;
     break;    }
 }
 if(i==SIZE){
   printf("Element NOt Found..\n"); }
 traversal();  
}
//Quadratic probing..
void insertionQP(int value){
  hkey=value%SIZE;
 for(i=0;i<SIZE;i++){
   if(a[(hkey+i*i)%SIZE]==-1){
     a[(hkey+i*i)%SIZE]=value;
     break;    }
 }
 if(i==SIZE){
   printf("Space is not available in HashTable..\n"); }
 traversal();
}

void deletionQP(int value){
  hkey=value%SIZE;
 for(i=0;i<SIZE;i++){
   if(a[(hkey+i*i)%SIZE]==value){
     a[(hkey+i*i)%SIZE]=-1;
     break;    }
 }
 if(i==SIZE){
   printf("Element NOt Found..\n"); }
 traversal();  
}
//DoubleHashing..
void insertionDH(int value){
  hkey = value%SIZE;
  int p=11,hkey2;
  hkey2 = p-value%p;
 for(i=0;i<SIZE;i++){
   if(a[(hkey+i*hkey2)%SIZE]==-1){
     a[(hkey+i*hkey2)%SIZE]=value;
     break;    }
 }
 if(i==SIZE){
   printf("Space is not available in HashTable..\n"); }
 traversal();
}

void deletionDH(int value){
  hkey = value%SIZE;
  int p=11,hkey2;
  hkey2 = p-value%p;
 for(i=0;i<SIZE;i++){
   if(a[(hkey+i*hkey2)%SIZE]==value){
     a[(hkey+i*hkey2)%SIZE]=-1;
     break;    }
 }
 if(i==SIZE){
   printf("Element NOt Found..\n"); }
 traversal();
}

void main(){
	int i;
 for(i=0;i<SIZE;i++){
  a[i]=-1; 
 }
 while(key){
 printf("closed hashing..\nEnter\n0.Exit\n1.For insertionLP\n2.for deletionLP\n3.for traversal\n4.For insertionQP\n5.for deletionQP\n6.for insertionDH\n7.for DeletionDH\n");
 printf("Enter ur choice :");
 scanf("%d",&choice);
 switch(choice){
   case 0: key=0; 
        break;
   case 1:printf("Enter the Value to Insert to HashTable by LinearProbing: ");
          scanf("%d",&value);
          insertionLP(value);
          break;
   case 2:printf("Enter the Value to Delete from HashTable by LinearProbing: ");
          scanf("%d",&value);
          deletionLP(value);
          break;
   case 3: traversal();
          break;   
   case 4:printf("Enter the Value to Insert to HashTable by QuadraticProbing: ");
          scanf("%d",&value);
          insertionQP(value);
          break;
   case 5:printf("Enter the Value to Delete from HashTable by QuadraticProbing: ");
          scanf("%d",&value);
          deletionQP(value);
          break;    
   case 6:printf("Enter the Value to insert to HashTable by DoubleHashing: ");
          scanf("%d",&value);
          insertionDH(value);
          break; 
   case 7:printf("Enter the Value to Delete from HashTable by DoubleHashing: ");
          scanf("%d",&value);
          deletionDH(value);
          break;       
   default:printf("Please,Enter proper Choice!!.. \n");
          
  }
 }
}
