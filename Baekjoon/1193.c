#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int num[4500] = { 0, };
int main() {
	int X, top, bot, n = 0, check;

	num[n++] = 2;
	while (1) {
		num[n] = num[n - 1] + n + 1;
		if (num[n] > 10000000)
			break;
		n++;
	}
	scanf("%d", &X);
	if (X == 1)
		printf("1/1\n");
	else {
		for (int i = 0; i < n; i++) {
			if (num[i] <= X && X < num[i + 1]) {
				if (i == 0 || i % 2 == 0) {
					top = 1 + (X - num[i]);
					bot = (i + 2) - (X - num[i]);
				}
				else {
					top = (i + 2) - (X - num[i]);
					bot = 1 + (X - num[i]);
				}
			}
		}
		printf("%d/%d\n", top, bot);
	}
	return 0;
}