#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c;
	printf("Input a:\n");
	scanf("%f", &a);
	printf("Input b:\n");
	scanf("%f", &b);
	printf("Input c:\n");
	scanf("%f", &c);
	funccalc(a, b, c);
	getchar();
	getchar();
	return 1;
}
