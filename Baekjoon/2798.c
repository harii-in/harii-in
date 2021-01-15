#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n, m;
	int num[100] = { 0, };
	int sum = 0;
	int max = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				sum = num[i] + num[j] + num[k];
				if (sum <= m && max < sum)
					max = sum;
			}
		}
	}
	printf("%d\n", max);
	return 0;
}