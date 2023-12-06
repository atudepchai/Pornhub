#include <stdio.h>

int nhapN(int n){
	do{
		
			printf("nhap n:\n");
			scanf("&d", &n);
		
	}while(n<0); return n;
}
void nhapmang(int arr[], int n){
	for(int i = 0; i < n; ++i){
		printf("a[%d]=",i);
		scanf("%d",& arr[i]);
	}
}

void xuatmang(int arr[], int n){
	for(int i = 0; i < n; ++i){
		printf("a[%d]=",i);
		scanf("%d",& arr [i]);
	}
	
}

	

int main(){
	int n;
	int arr[100];
	if(n < 0 || n > 100){
		printf("khong hop le !!!");
	}
	nhapN(n);
	nhapmang(arr, n);
	xuatmang(arr, n);
	
	
	
	
}


