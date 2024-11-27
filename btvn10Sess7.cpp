#include<stdio.h>
int main(){
	int num[1];
	int n;
	int i;
	int soNT=2;
	int j;
	int number;
	int count=0;
	
	printf("nhap vao so phan tu cua mang: ");
	scanf("%d",&num[n]);
	
	for(i=0;i<num[n];i++){
		printf("moi ban nhap vao so thu %d: ",i+1);
		scanf("%d",&num[i]);
	}
	
	while(number<num[n]){
		count=0;
		for(int j=1; j<=soNT; j++){
			if(soNT%j==0){
				count++;
			}
		}
		if(count==2){
			printf("\n so ngguyen to: %d",soNT);
			number++;
		}
		soNT++;
	}
	return 0;
}
