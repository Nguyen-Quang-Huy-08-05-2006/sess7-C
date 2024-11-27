#include<stdio.h>
int main(){
	int num[1];
	int n;
	int i;
	printf("nhap vao so phan tu cua mang: ");
	scanf("%d",&num[n]);
	for(i=0;i<n+1;i++){
		printf("moi ban nhap vao so: ");
		scanf("%d",&num[i]);
		if(num[i]%2!=0){
		scanf("%d",&num[i]);
		}else if(num[i]%2==0){
			printf("moi ban nhap lai\n");
		}
	}	
	return 0;
}
