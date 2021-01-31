#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int N, M;
int* arr;

void BackTracking4(int x) {
	for (int i = 1; i <= N; i++) {
		if (x > 0 && i < arr[x - 1])
			continue;
		arr[x] = i;
		if (x == M - 1) {
			for (int j = 0; j < M; j++)
				printf("%d ", arr[j]);
			puts("");
		}
		else
			BackTracking4(x + 1);
	}
}
int main() {
	scanf("%d %d", &N, &M);
	arr = calloc(M, sizeof(int));
	BackTracking4(0);
	free(arr);
	return 0;
}