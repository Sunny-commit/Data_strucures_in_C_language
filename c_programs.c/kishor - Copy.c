#include<stdio.h>
int main(){
int i,j,n,k;
printf("enter size:");
scanf("%d",&n);
int a[n],temp;
printf("enter array values:");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
	printf("%d",a[i]);
}
for(i=0;i<n-1;i++){
	j=i;
	if(a[j]>a[j+1]){
		back:
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
	}
	if(i>0&&a[j-1]>a[j]){
		j=j-1;
		goto back;
		i=i--;
	}
	printf("\nStep=%d the Array Elements are\n",i);
 for(k=0;k<n;k++){
 	printf("%d\t",a[k]);
 }
}
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
