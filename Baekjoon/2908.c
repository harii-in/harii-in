#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main() {
	int num1, num2;
	int a1, b1, c1, a2, b2, c2;
	int n1, n2;
	scanf("%d %d", &num1, &num2);

	a1 = num1 / 100;
	b1 = (num1 % 100) / 10;
	c1 = (num1 % 100) % 10;
	n1 = c1 * 100 + b1 * 10 + a1;

	a2 = num2 / 100;
	b2 = (num2 % 100) / 10;
	c2 = (num2 % 100) % 10;
	n2 = c2 * 100 + b2 * 10 + a2;

	if (n1 < n2)
		printf("%d", n2);
	else
		printf("%d", n1);

	return 0;
}