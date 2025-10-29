#include <stdio.h>
#include <math.h>

int main() {
    int num1;
    int num2;
    
    printf ("nhap so nguyen duong thu nhat: ");
    scanf ("%d", &num1);
    printf ("nhap so nguyen duong thu hai: ");
    scanf ("%d", &num2);
    
    for (int i = (num1 > num2 ? num1 : num2); i >= 1; i++) {
    	if (i % num1 == 0 && i % num2 == 0) {
    		printf ("BCNN = %d \n", i);
    		break;
		}
	}
    return 0;
}
