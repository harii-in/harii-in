#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	int i = 2;
	int p, r;

	scanf("%d", &n);

	if (n == 1)
		return 0;

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			printf("%d\n", i);
			n /= i;
			i--;
		}
	}
	if (n > 1)
		printf("%d", n);
	return 0;
}