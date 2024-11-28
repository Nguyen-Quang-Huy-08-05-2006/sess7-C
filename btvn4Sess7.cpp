#include<stdio.h>
int main(){
	int n;
	printf("nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	int num[n];
	for(int i=0;i<n+1;i++){
		printf("moi ban nhap vao so thu %d: ",1+i);
		scanf("%d",&num[i]);
	}	
	return 0;
}
