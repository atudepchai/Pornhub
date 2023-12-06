#include <stdio.h>
#include <math.h>

int main() {
	int chon;

printf("++--------------------------------------------------------------------------------++\n");
	printf("+                             VUI LONG CHON                                   +\n");
	printf("l chuc nang so 1: S = 1 + (1+2)+(1+2+3)+...+(1+2+3+...+n)                     l\n");
	printf("l chuc nang so 2: S= 1^1 + 2^2 + 3^3 +...+n^n                                 l\n");
	printf("l chuc nang so 3: Kiem tra n co phai so nguyen to khong                       l\n");
	printf("++----------------------------------------------------------------------------++\n");    
printf("Vui long chon mot che do:\n");
    printf("1.S = 1 + (1+2)+(1+2+3)+...+(1+2+3+...+n)\n");
    printf("2.S= 1^1 + 2^2 + 3^3 +...+n^n\n");
    printf("3.Kiem tra n co phai so nguyen to khong \n");
    
    
    scanf("%d", &chon);
     switch (chon) {

   
    case 1:{
		

    	 int n, i, j, sum;
    	  
    
    printf("Nhap vao so n: ");
    scanf("%d", &n);
    
    i = 1;
    do {
        int tam = 0;
        j = 1;
        while (j <= i) {
            tam += j;
            j++;
        }
        
       sum += tam;
        i++;
    } while (i <= n);
    
    printf("Tong cua day so la: %d\n", sum);
  }  break;

    
	case 2 :{
	
	
    long long sum2 = 0;
    do{
	int i = 1;

    printf("Nhap vao so n: ");
    scanf("%d", &n);
    long long luythua = pow(i, i);
        
        
        sum2+= luythua;
        i++;
        printf("Tong cua day so la: %lld\n", sum2);

    
    }while ( i <= n );
       // pow(base, exponent); <math.h>
        
    

    
}break;
case 3:{
	

     
	int k = 2 ;
do {

printf("nhap so bat ki:");
scanf("%d", &n);





if(n % 2 == 0){
    printf("%d ko la so NT",n);
    }if(n % 3 == 0){
    printf("%d ko la so NT",n);
    

}else{
printf("%d la so NT",n);
}
}break;



}while(k <= n - 1);






break;
	
}

    return 0;
}
