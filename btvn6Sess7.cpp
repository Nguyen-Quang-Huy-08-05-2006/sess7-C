#include<stdio.h>
int main(){
	int num[5]={1,2,3,4,5};
	for(int i=0;i<sizeof(num)/sizeof(num[0]);i++){
		if(num[i]%2==0){
			num[i]=num[i]+3;
		}else if(num[i]%2!=0){
			num[i]=num[i]+2;
		}
	}
	printf("num[5]={%d,%d,%d,%d,%d} ",num[0],num[1],num[2],num[3],num[4]);
	return 0;
}
