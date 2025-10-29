#include <stdio.h>
#include <math.h> 

int main() {
    int num;
	int reverse = 0;
	int temp;

    printf("moi ban nhap vao 1 so nguyen: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("doi dau tu so am sang so duong \n");
        num = -num;
    }

    temp = num;

    while (temp > 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }

    printf("cac so theo thu tu la: ");
    while (reverse > 0) {
        printf("%d ", reverse % 10);
        reverse /= 10;
    }

    printf("\n");

    return 0;
}

