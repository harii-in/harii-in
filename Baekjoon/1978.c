#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num = 0;
	int n = 0; int cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		for (int j = 2; j <= num; j++) {
			if (num == 1)
				break;
			if (j == num) {
				cnt++;
				break;
			}
			if (num % j == 0)
				break;
		}
	}
	printf("%d", cnt);
	return 0;
}