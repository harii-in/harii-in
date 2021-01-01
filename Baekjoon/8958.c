#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int cnt = 0;
	int n;
	char test[1024];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int score = 0;
		int add = 1;
		scanf("%s", test);
		int j = 0;
		while (test[j] != '\0') {
			if (test[j] == 'O') {
				score += add;
				add++;
			}
			else
				add = 1;
			j++;
		}
		printf("%d\n", score);
	}
	return 0;
}