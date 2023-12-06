#include <stdio.h>
int nhap(int n){
	do{
	
	printf("nhap n>0 \n: ");
	printf("nhap nam sinh: \n ");
	
	scanf("%d",&n);
}while (n<0);
return n;
	
	
}
void namsinh(int n){
	
     int namhientai = 2023;
    
     int namsinh = n;
     int tuoi;
     tuoi = namhientai - namsinh;
     printf("Ban sinh nam %d, ban %d tuoi\n",namsinh, tuoi);
	
}
void tieninternet(int n){
	
	int time = n; 
	 printf("bay gio la may gio? nhap time hien tai\n  ") ;
  scanf("%d", &time);
  int truycap ;
 
  printf("nhap thoi gian ban muon truy cap, (tinh theo gio)\n ");
  scanf("%d", &truycap);
	
	
	
	
	
	int tien7den17 = 400;
	int tien17den24  = 350;
	int tien0den7  = 300;
	int tong;
	int khuyenmai;
	

	
	

	if (time>=7 && time <= 17 )

	tong = (tien7den17 * 60 * truycap);
     else if (truycap > 6)
     khuyenmai = tong * 0.1;

 
	 if ( time >= 17 && time <=24)
	 	
	 
	 tong =  (tien17den24 * 60 * truycap);
	 else if (truycap > 4)
	  khuyenmai = tong * 0.12;
	 
	 if ( time >= 0 && time <=7 * truycap)
	 	
	 
	 tong =  (tien0den7 * 60);
	 else if(truycap > 7)
	 khuyenmai = tong * 0.15;
	 printf("tong tien cua ban la: %d d", tong);
	 printf("khuyen mai cua ban la: %d d", khuyenmai);
	 printf("tong tien cua ban la: %d d", tong - khuyenmai);
	 
	


}


int main(){
	int n,chon;
	n = nhap(n);
	
		namsinh(n);
		
	
			tieninternet(n);
			
			
	
	
	
}


	

