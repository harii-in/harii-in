#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n[1000] = { 0, };
	int num, temp;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &n[i]);
	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num - i - 1; j++) {
			if (n[j] > n[j + 1]) {
				temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < num; i++) {
		printf("%d\n", n[i]);
	}
	return 0;
}