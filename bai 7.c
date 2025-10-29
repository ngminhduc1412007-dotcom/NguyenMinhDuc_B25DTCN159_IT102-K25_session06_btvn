#include <stdio.h>
#include <math.h> 

int main() {
    float num1, num2, num3;
    int select;
    int entered = 0;

    do {
        printf ("menu chuc nang: \n");
        printf("1.nhap 3 so\n");
        printf("2.tong 3 so\n");
        printf("3.trung binh cong 3 so\n");
        printf("4.so nho nhat\n");
        printf("5.so lon nhat\n");
        printf("6.thoat\n");
        printf("Nhap vao chuc nang muon chon: ");
        scanf("%d", &select);

        switch (select) {
            case 1:
                printf("moi ban nhap so thu nhat: ");
                scanf("%f", &num1);
                printf("moi ban nhap so thu hai: ");
                scanf("%f", &num2);
                printf("Mmi ban nhap so thu ba: ");
                scanf("%f", &num3);
                entered = 1;
                break;

            case 2:
                if (!entered)
                    printf("vui long nhap 3 so nguyen \n");
                else
                    printf("tong 3 so = %f \n", num1 + num2 + num3);
                break;

            case 3:
                if (!entered)
                    printf("vui long nhap 3 so nguyen \n");
                else
                    printf("trung binh cong = %f \n", (num1 + num2 + num3) / 3);
                break;

            case 4:
                if (!entered)
                    printf("vui long nhap 3 so nguyen \n");
                else {
                    float min = (num1 < num2 ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3));
                    printf("so nho nhat = %f \n", min);
                }
                break;

            case 5:
                if (!entered)
                    printf("vui long nhap 3 so nguyen \n");
                else {
                    float max = (num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3));
                    printf("so lon nhat = %f \n", max);
                }
                break;

            case 6:
                printf("thoat chuong trinh \n");
                break;

            default:
                printf("lua chon khong hop le \n");
        }
    } while (select != 6);

    return 0;
}

