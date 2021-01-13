#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 2500
char str[SIZE][SIZE];

int star(int N, int num) {
	if (num == N * 3)
		return 0;
	else {
		if (num == 3) {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					if (i % 3 == 1 && j % 3 == 1)
						str[i][j] = ' ';
					else continue;
				}
			}
		}
		else {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					if (num / 3 <= i && i < 2 * num / 3 && num / 3 <= j && j < 2 * num / 3)
						str[i][j] = ' ';
					else
						str[i][j] = str[i % num][j % num];//9X9 배열 대입
				}
			}
		}
		star(N, num * 3);
	}
}

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			str[i][j] = '*';
		}
	}
	star(N, 3);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printf("%c", str[i][j]);
		}
		puts("");
	}
	return 0;
}