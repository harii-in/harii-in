#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int cnt = 0;
	int n;
	scanf("%d", &n);
	while (1) {
		if (n % 5 == 0) {
			cnt += n / 5;
			printf("%d\n", cnt);
			break;
		}
		n -= 3;
		cnt++;
		if (n < 0) {
			printf("-1\n");
			break;
		}
	}
	return 0;
}