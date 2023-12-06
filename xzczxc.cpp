#include <stdio.h>
#include <math.h>
int nhap(int n);
int chanle(int n);
int sochiahetchonam(int n);
int kiemtrasoNT( int n);
int tinhTong(int n);




int main(){
	int n,k,z,v;

	int kt = kiemtrasoNT(n);
	
	nhap(n);
	chanle(n);
	
		
		nhap(z);
		kiemtrasoNT (n);
		if (kt == 0)
		printf(" khong phai so NT\n");
		if (kt == 1)
		printf(" la so NT\n");
	
	nhap(k);
		sochiahetchonam(n);
		
		
		nhap(v);
		 tinhTong(n);
		 
		
			
		
					
					
					
				
				
			
			
	}
	
	

int nhap(int n){
	do{
		printf("nhap so n>0 : ");
		scanf("%d", &n);
		
	}while(n<0);
}
int chanle(int n){
	if (n % 2 == 0) {
        printf("%d la so chan.\n", n);
    } else {
        printf("%d la so le.\n", n);
    }
    
}

     

int kiemtrasoNT( int n){
	printf("kiem tra so NT\n");

	if (n < 2) 
	return 0;
	
	
for ( int i = 2; i <= n - 1; i++){
	if (n % i == 0)
	return 0;

	
}
return 1;
	
			
	
}
int sochiahetchonam(int n){
	
		int tong = 0; 
	for (int i = 1; i <=n ; i++){
		if (n % 5 == 0) 
		
		tong += n;
		printf (" tong so chia het cho 5 la %d", tong);
		
       
	

    
	}
}
int tinhTong(int n) {
	printf("tinh tong giai thua\n");
    int giaithua = 1;
int s = 1;
for (int i = 1;i<=n;i++) {
    giaithua = giaithua * i;
    s = s + giaithua; 
}
printf("%d", s);
return 0;
} 



