#include<stdio.h>
int main(){
	int num[5];
	for(int i=0;i<sizeof(num)/sizeof(num[0]);i++){
		printf("nhap vao so thu %d cua mang: ", i+1);
		scanf("%d",&num[i]);
	}
	printf("num[%d]={%d, %d, %d, %d, %d}\n",sizeof(num)/sizeof(num[0]) ,num[0] ,num[1], num[2], num[3], num[4]);
	
	return 0;
	
}
