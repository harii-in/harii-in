#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int N, M;
int* arr;
int* flag;

void set(int n) {
	for (int i = 1; i <= N; i++) {
		if (flag[i] == 1)
			continue;
		arr[n] = i;
		if (n == M - 1) {
			for (int j = 0; j < M; j++)
				printf("%d ", arr[j]);
			puts("");
		}
		else {
			flag[i] = 1;
			set(n + 1);
			flag[i] = 0;
		}
	}
}
int main() {
	scanf("%d %d", &N, &M);
	arr = calloc(M, sizeof(int));
	flag = calloc(N + 1, sizeof(int));
	set(0);
	free(arr);
	free(flag);
	return 0;
}
