#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void hanoi(int n, int start, int mid, int last) {
	if (n == 1)
		printf("%d %d\n", start, last);
	else {
		hanoi(n - 1, start, last, mid);
		hanoi(1, start, mid, last);
		hanoi(n - 1, mid, start, last);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	int min = pow(2, n) - 1;
	printf("%d\n", min);

	hanoi(n, 1, 2, 3);
	return 0;
}