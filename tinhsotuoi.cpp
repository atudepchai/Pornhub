#include <stdio.h>
int main(){
	int namhientai, namsinh;
	printf("vui long nhap nam sinh: ");
	printf("vui long nhap nam hien tai: ");
	scanf(" %d", &namsinh, &namhientai);
	printf("so tuoi cua ban la: %d", namhientai - namsinh);
	return 0;
}
