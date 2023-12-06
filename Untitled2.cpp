#include <stdio.h>
#include <cstdlib>
 #include <ctime>

void NhapMang2Chieu(int& m, int& n, int arr[][3]) {
    printf("Nhap so phan tu m (m < 10): ");
    scanf("%d", &m);
    printf("Nhap so phan tu n (n < 3): ");
    scanf("%d", &n);

    

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap gia tri mang [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void XuatMang(int m, int n, int arr[][3]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
}
void RanDom(int arr[][3], int m, int n){
	printf("Nhap so phan tu m (m < 10): ");
    scanf("%d", &m);
    printf("Nhap so phan tu n (n < 3): ");
    scanf("%d", &n);
	srand(time (0));
	
	for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
        	arr[i][j]  =  rand () % 20 -10;
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
	
}
void TongMang2ChieuSoChan(int m, int n, int arr[][3]){
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] % 2 == 0) {
                sum += arr[i][j];
            }
        }
        printf("Tong cac phan tu chan trong mang: %d\n", sum);
    }
    
    printf("\n");
}
void TongMangTheoDong(int m, int n, int arr[][3]) {
    int k;
    printf("Nhap so dong can tinh tong: ");
    scanf("%d", &k);

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[k][i];
    }

    printf("Tong cac phan tu trong dong [%d] = %d\n", k, sum);
    printf("\n");
}
void TimKiem(int m, int n, int arr[][3]){
	int vt;
	printf("Nhap phan tu can tim: ");
    scanf("%d", &vt);
	for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == vt) 
        
        printf("Phan tu %d tai [%d][%d]\n", arr[i][j], i,j);
       }
            
    }
    
    printf("\n");
}


int main() {
    int m, n,k, arr[10][3];
    NhapMang2Chieu(m, n, arr);
    
        //RanDom(arr,m,n);
        
        
        
    
    
    //XuatMang(m, n, arr);
    //TongMang2ChieuSoChan(m,n,arr);
    //TongMangTheoDong(m,n,arr);
    TimKiem(m,n,arr);
    return 0;
}
