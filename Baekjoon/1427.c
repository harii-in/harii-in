#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	if (*(int*)a > * (int*)b)
		return (-1);
	else if (*(int*)a < *(int*)b)
		return 1;
	else
		return 0;
}

int main() {
	int n;
	int num[10] = { 0, };
	int i = 0;
	scanf("%d", &n);
	while (n > 0) {
		num[i] = n % 10;
		n /= 10;
		i++;
	}
	qsort(num, i, sizeof(int), compare);
	for (int j = 0; j < i; j++)
		printf("%d", num[j]);
	return 0;
}