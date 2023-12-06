#include<stdio.h>
// n co phai so nguyen to
int main(){
 int i = 2,n,sum=0;
 do{
 
 printf("nhap n =");
 scanf("%d",&n);
 
{
  if(n%i==0){
   sum = sum +1;
   i++;
  }
 }if(sum==2){
  printf("n la so nguyen to");
 }
 else printf("n khong phai so nguyen to");
  
 
}while(i<=n);

    return 0;
}
