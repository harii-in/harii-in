#define _CRT_SECURE_NO_WARNINGS
#define SIZE 15
#include <stdio.h>
int main() {
	int t, k, n;
	int str[SIZE][SIZE] = { 0, };
	for (int i = 1; i < SIZE; i++)
		str[0][i] = i;
	for (int i = 1; i < SIZE; i++)
		for (int j = 1; j < SIZE; j++)
			str[i][j] = str[i][j - 1] + str[i - 1][j];
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &k);
		scanf("%d", &n);
		printf("%d\n", str[k][n]);
	}
	return 0;
}