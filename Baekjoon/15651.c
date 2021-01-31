#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int N, M;
int* arr;

void BackTracking3(int x) {
	for (int i = 1; i <= N; i++) {
		arr[x] = i;
		if (x == M - 1) {
			for (int j = 0; j < M; j++)
				printf("%d ", arr[j]);
			puts("");
		}
		else
			BackTracking3(x + 1);
	}
}
int main() {
	scanf("%d %d", &N, &M);
	arr = calloc(M, sizeof(int));
	BackTracking3(0);
	free(arr);
	return 0;
}