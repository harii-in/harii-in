#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10001
int num[SIZE] = { 0, };
int main() {
	int n, tmp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		num[tmp]++;
	}
	for (int i = 0; i <= SIZE; i++) {
		if (num[i] == 0)
			continue;
		for (int j = 0; j < num[i]; j++)
			printf("%d\n", i);
	}
	return 0;
}