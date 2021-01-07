#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a[246913] = { 0, };
int main() {
	int n = 0;
	int cnt;
	a[0] = 1; a[1] = 1;

	for (int i = 2; i < 246913; i++) {
		for (int j = 2; i * j <= 246913; j++)
			a[i * j] = 1;
	}

	while (1) {
		cnt = 0;
		scanf("%d", &n);
		if (n == 0)
			break;
		for (int i = n + 1; i <= (2 * n); i++) {
			if (a[i] == 0) {
				cnt++;
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}