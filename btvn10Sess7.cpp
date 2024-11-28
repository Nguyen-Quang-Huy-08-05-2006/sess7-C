#include<stdio.h>
int main(){
	int n;
	int i;
	int j;
	int count=0;
	printf("nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++){
		printf("moi ban nhap vao so thu %d: ",i+1);
		scanf("%d",&num[i]);
	}
	i=0; 
	while(i<n){
		count=0;
		for(j=1; j<=num[i]; j++){
			if(num[i]%j==0){
				count++;
			}
		}
		if(count==2){
			printf("\n so ngguyen to: %d",num[i]);
		}
		i++;
	}
	return 0;
}
