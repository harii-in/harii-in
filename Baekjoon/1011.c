#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	int n, x, y, a;
	int dist;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		dist = y - x;
		a = (int)sqrt(dist);

		if (dist == pow(a, 2))
			printf("%d\n", 2 * a - 1);
		else if (pow(a, 2) < dist && dist <= pow(a, 2) + a)
			printf("%d\n", 2 * a);
		else if (pow(a, 2) + a < dist && dist < pow(a + 1, 2))
			printf("%d\n", 2 * a + 1);
	}
	return 0;
}