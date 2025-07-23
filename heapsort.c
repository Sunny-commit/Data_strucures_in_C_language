#include<stdio.h>

#define N 10
void maxheap(int a[],int n);
void heapsort(int a[],int n);

void heaping_max(int a[],int n,int i);

void swap(int *x,int *y);
int i,largest,l,r,temp,n;
int a[N];
int main(){
	printf("enter array elements \n");
	for(i=0;i<N;i++){
		printf("a[%d]",i+1);
		scanf("%d",&a[i]);
	}

	heapsort(a,N);
	printf("printing sorted  tree \n");
	for(i=0;i<N;i++){
		printf("%d \t",a[i]);
	}


}
void maxheap(int a[],int n){
	for(i=(n/2)-1;i>=0;i--){
		heaping_max(a,n,i);
	}
}

void heaping_max(int a[],int n,int i){
	largest=i;
	l=2*i +1;
	r=2*i +2;
	if(l<n && a[l]>a[largest]){
		largest=l;
	}
	if(r<n && a[r]>a[largest]){
		largest=r;
	}
	if(largest!=i){
		swap(&a[i],&a[largest]);
		heaping_max(a,n,largest);
	}
	

	
}

void heapsort(int a[],int n){
	for(i=(n/2)-1;i>=0;i--){
		heaping_max(a,n,i);
	}
	for(i=n-1;i>=0;i--){
		swap(&a[0],&a[i]);
		heaping_max(a,i,0);
	}
}
void swap(int *x,int * y){
	temp=*x;
	*x=*y;
	*y=temp;
}



