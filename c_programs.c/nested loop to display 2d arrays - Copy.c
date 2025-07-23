#include<stdio.h>
const int city=2;
const int week=7;
int main(){
	int temperature[city][week];
	int i,j;
	for(i=0;i<city;++i){
		for( j=0;j<week;++j)
		{
			printf("city %d ,day %d:",i+1,j+1);
			scanf("%d",&temperature[i][j]);
		}
	}
	printf("\ndisplaying values:\n\n");
	for( i=0;i<city;++i){
		for( j=0;j<week;++j){
			printf("city %d,day %d=%d\n",i+1,j+1,temperature[i][j]);
		}
	}
	return 0;
}
