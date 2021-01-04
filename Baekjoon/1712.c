#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	unsigned int a, b, c;
	unsigned int i;
	scanf("%d %d %d", &a, &b, &c);
	if (b >= c) {
		printf("-1");
	}
	else {
		i = a / (c - b) + 1;
		printf("%d", i);
	}
	return 0;
}