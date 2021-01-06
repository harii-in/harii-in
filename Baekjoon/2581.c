#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int prime[10000] = { 0, };
int main() {
	int m, n;
	int sum = 0;
	int a = 0;
	scanf("%d", &m);
	scanf("%d", &n);
	for (int i = m; i <= n; i++) {
		for (int j = 2; j <= i; j++) {
			if (i == 1)
				break;
			if (j == i) {
				sum += i;
				prime[a] = i;
				a++;
				break;
			}
			if (i % j == 0)
				break;
		}
	}
	if (prime[0] == 0)
		printf("-1");
	else {
		printf("%d\n", sum);
		printf("%d\n", prime[0]);
	}
	return 0;
}