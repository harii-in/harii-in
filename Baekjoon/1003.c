#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fibonacci(int n) {
	int last = 0, current = 1, result = 0;
	for (int i = 0; i <= n; i++) {
		last = current;
		current = result;
		result = last + current;
	}
	printf("%d %d\n", last, current);
}

int main() {
	int t, n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		fibonacci(n);
	}
	return 0;
}

/*int one = 0, zero = 0;

int fibonacci(int n) {
	if (n == 0)
		zero++;
	else if (n == 1)
		one++;
	else
		return (fibonacci(n - 1) + fibonacci(n - 2));
	return;
}

int main() {
	int T, n = 0;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &n);
		fibonacci(n);
		printf("%d %d\n", zero, one);
		zero = 0, one = 0;
	}
	return 0;
}
*/