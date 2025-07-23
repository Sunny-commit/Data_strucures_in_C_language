#include<stdio.h>
int main(){
	int i,n,pos;
	int arr[10];
	printf("enter size of the arraay:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the value to find:");
	scanf("%d",&pos);
	int first=0;
	int last=n-1;
	int middle=(first+last)/2;
	while(first<=last){
		if(arr[middle]<pos){
			first=middle+1;
		}
		else if(
		array[middle]==pos){
			printf("is present at index %d",middle);
			break;
		}
		else{
			last=middle-1;
			middle=(first+last)/2;
		}
		if(first>last){
			printf("not found int hr elist:")
			return 0;
		}
