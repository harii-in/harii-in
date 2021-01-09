#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num;
	int tmp = 1;
	int cnt = 1;
	scanf("%d", &num);
	while (1) {
		if (tmp >= num) {
			printf("%d", cnt);
			break;
		}
		else {
			tmp += (6 * cnt);
			cnt++;
		}
	}
	return 0;
}