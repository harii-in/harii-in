#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int h, w, n, t, W, H;
	int cnt;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		h = 0, w = 0, n = 0, cnt = 0;
		scanf("%d %d %d", &h, &w, &n);
		for (int j = 1; j <= w; j++) {
			for (int k = 1; k <= h; k++) {
				cnt++;
				if (cnt == n) {
					printf("%d%02d\n", k, j);
					break;
				}
			}
			
		}
	}
	return 0;
}