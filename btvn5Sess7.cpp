#include <stdio.h>
int main(){
	int num[5]={1,9,6,4,7},i=0,max=num[0];
	while(i<=sizeof(num)/4-1){
		if(max<num[i]){
			max=num[i];
		}
		++i;
	}
	printf("gia tri lon nhat trong mang la %d",max);
	return 0;
}
