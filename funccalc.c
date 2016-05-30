#include <stdio.h>
#include <math.h>

int funccalc(float a, float b, float c) {
	float x, x2, d;
	d = b * b - 4 * a * c;
	if (d > 0) {
		x = (-1 * b + sqrt(d)) / (2 * a);
		x2 = (-1 * b - sqrt(d)) / (2 * a);
		printf("X1:%f\tX2%f\n", x, x2);
		return 2;
	}
	if (d == 0) {
		x = (-1 * b + sqrt(d)) / (2 * a);
		printf("X1:%f\n", x);
		return 1;
	}
	if ( a == 0) {
		x = -1 * c / b;
		printf("X1:%f\n", x);
		return 1;
	}
	if ((b == 0) && (a == 0)) {
		printf("Wrong arguments");
		return -1;
	}
	return 0;
}
