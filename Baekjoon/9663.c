#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int N;
int row[16], col[16];

int N_Queen(int x, int y) {
	for (int i = 0; i < x; i++)//row(x)까지
		if (x == row[i] || y == col[i] || abs(x - row[i]) == abs(y - col[i]))
			return 0;
	if (x == N - 1)
		return 1;
	row[x] = x, col[x] = y;//몇 번째 row에 자리값을 저장
	int cnt = 0;
	for (int i = 0; i < N; i++)
		cnt += N_Queen(x + 1, i);
	return cnt;

}
int main() {
	int cnt = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		cnt += N_Queen(0, i);
	printf("%d", cnt);
	return 0;
}