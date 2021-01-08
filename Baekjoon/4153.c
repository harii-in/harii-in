#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	int A, B, C;
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;
		A = pow(a, 2);
		B = pow(b, 2);
		C = pow(c, 2);
		if (A == B + C || B == A + C || C == A + B)
			printf("right\n");
		else
			printf("wrong\n");
	}
	return 0;
}