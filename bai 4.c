#include <stdio.h>
#include <math.h>

int main(){
	float num1, num2;
	int select;
	
	printf ("moi ban nhap so thu nhat: ");
	scanf ("%f", &num1);
	printf ("moi ban nhap so thu hai: ");
	scanf ("%f", &num2); 
	
	do{
		printf ("menu chuc nang \n"); 
		printf ("1.tong 2 so \n");
		printf ("2.hieu 2 so \n");
		printf ("3.tich 2 so \n");
		printf ("4.thuong 2 so \n");
		printf ("5.thoat \n");
		printf ("nhap vao chuc nang muon chon: ");
		scanf ("%d", &select);
		
		switch (select){
			case 1:
				 printf("tong = %f \n", num1 + num2);
                break;
            case 2:
                printf("hieu = %f \n", num1 - num2);
                break;
            case 3:
                printf("tich = %f \n", num1 * num2);
                break;
            case 4:
                if (num2 != 0)
                    printf("thuong = %f \n", num1 / num2);
                else
                    printf("khong the chia cho 0 \n");
                break;
            case 5:
                printf("ket thuc \n");
                break;
            default:
                printf("lua chon khogn hop le hay nhap lai \n");
        }
    } while (select != 5);

	return 0;		
		 
	}
