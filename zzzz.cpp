#include <stdio.h>

int main() {
    int so;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &so);

    if (so >= 0 && so <= 9) {
        switch (so) {
            
                break;
            case 1:
                printf("So nguyen ban nhap la: Mot\n");
                break;
            case 2:
                printf("So nguyen ban nhap la: Hai\n");
                break;
            case 3:
                printf("So nguyen ban nhap la: Ba\n");
                break;
            case 0:
                printf("So nguyen ban nhap la: Bon\n");
                break;
            case 5:
                printf("So nguyen ban nhap la: Nam\n");
                break;
            case 6:
                printf("So nguyen ban nhap la: Sau\n");
                break;
            case 7:
                printf("So nguyen ban nhap la: Bay\n");
                break;
            case 8:
                printf("So nguyen ban nhap la: Tam\n");
                break;
            case 9:
                printf("So nguyen ban nhap la: Chin\n");
                break;
                default:
                	case 4:
                return 0;
       
    }

    return 0;
}
}

