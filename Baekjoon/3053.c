#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
int main() {
	int R;
	double result1, result2;
	scanf("%d", &R);
	result1 = pow(R, 2) * 2;
	result2 = pow(R, 2) * M_PI;
	printf("%.6lf\n", result2);
	printf("%.6lf\n", result1);
	return 0;
}