#include <stdio.h>
#include <math.h>

int main(){
	
	int n, sum = 0;
	printf ("nhap vao 1 so nguyen duong N:  \n");
	scanf ("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		sum = sum + i;
	}
	
	printf ("%d", n, sum);
	return 0;
}
