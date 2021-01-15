#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	int per[50][2] = { 0, };
	int cnt = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &per[i][0], &per[i][1]);
	}
	for (int i = 0; i < n; i++) {
		cnt = 0;
		for (int j = 0; j < n; j++) {
			if (per[i][0] < per[j][0] && per[i][1] < per[j][1])
				cnt++;
		}
		printf("%d ", cnt + 1);
	}
	return 0;
}