#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main() {
	int x, a, b, c;
	int cnt = 0;

	scanf("%d", &x);

	if (x < 100)
		cnt = x;
	else {
		cnt = 99;
		for (int i = 100; i <= x; i++) {
			a = i / 100;
			b = (i % 100) / 10;
			c = (i % 100) % 10;
			if ((a - b) == (b - c))
				cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}