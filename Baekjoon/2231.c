#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	int sum = 0, check = 0;
	int m;
	scanf("%d", &n);
	for (int i = 10; i < n; i++) {
		m = i;
		sum = m;
		//sum = generator(i, sum);
		while (m > 0) {
			sum += m % 10;
			m /= 10;
		}
		if (sum == n) {
			printf("%d\n", i);
			check = 1;
			break;
		}
	}
	if (check == 0)
		printf("0\n");
	return 0;
}