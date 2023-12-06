#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>  
void NhapMang(int &x, int arr[]) {
    printf("Nhap so phan tu: ");
    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        printf("Nhap gia tri mang %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void XuatMang(int x, int arr[]) {
    for (int i = 0; i < x; i++) {
        printf(" a[%d]\n  = %d\n", i, arr[i]);
    }
}
void TimKiemPhanTu(int x, int arr,int vt){
	printf("Nhap vi tri ban muon tim:\n");
	scanf("%d", &vt);
	for(int i = 0; i < x; i++){
		if(arr[i]==vt){
		
		return 1;
	}
	}
	if(TimKiemPhanTu(x,arr,vt)==1)
	printf("Phan tu cua ban co gia tri tai a[%d]", arr[i]);
}
int main(){
	int x;int arr[100];int vt;
	NhapMang(x,arr);
	TimKiemPhanTu(x,arr,vt);
	XuatMang(x,arr);
}

