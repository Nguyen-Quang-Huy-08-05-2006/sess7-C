#include<stdio.h>
int main(){
	int numbers[5]={1,7,4,9,8};
	int chan=1;
	
	for(int i=0;i<sizeof(numbers)/sizeof(numbers[0]);i++){
		if(numbers[i]%2==0){
			printf("so chan la %d\n", numbers[i]);
			chan++;
		}
	}
	if(chan=1){
		printf("khong co so chan nao");
	}
	return 0;
}


