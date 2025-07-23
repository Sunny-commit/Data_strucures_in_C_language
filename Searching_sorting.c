#include<stdio.h>
void Binary_search(int a[],int l,int h,int x);
void Insertion_sort(int a[],int n);
void Selection_sort(int a[],int n);
//void Quick_sort();
void swap(int &x,int &y);
int main(){
	int choose;
	choose=1;
	while(choose){
		printf("1.Binary_sort\n2.Insertion_sort\n3.Selection_sort\n4.Quick_sort");
		int choice;
		switch(choice){
			case 1:
				int a[5]={3,7,1,9,6};
				printf("enter the number to search the index:");
				int x;
				scanf("%d",&x);
				Binary_search(a[],0,5,x);
			case 2:
					int a[5]={3,7,1,9,6};
				Insertion_sort(a[],5);
			case 3:
					int a[5]={3,7,1,9,6};
					Selection_sort(a[],5);
		}
		printf("enter the (0/1) to continue or to stop:\n");
		scanf("%d",&choose);
	}
}
void Binary_search(int a[],int l,int h,int x){
	int mid;
	while(l<h){
			mid=(l+h)/2;
			if(mid==x){
				return mid;
			}
			else if(mid>x){
				return h-1;
			}
			else{
				return l+1;
			}
	}
	return-1;
}
void Insertion_sort(int a[],int n){
	int i,j;
	for(i=1;i<n;i++){
		int key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
		
	}
}
void Selection_sort(int a[],int n){
	int i,j,min_index;
	for(i=0;i<n;i++){
		min_index=i;
		for(j=0;j<n;j++){
			if(a[j]<a[min_index])
			min_index=j;
		}
		void swap(int &a[i],&a[min_term]){
			temp=*a[i];
			*a[i]=*a[j];
			*a[j]=temp;
		}
	}
}

