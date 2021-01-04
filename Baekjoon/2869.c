#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main() {
	int a, b, v;
	int day;
	scanf("%d %d %d", &a, &b, &v);
	day = (v - b) / (a - b);
	if ((v - b) % (a - b) == 0)
		printf("%d", day);
	else 
		printf("%d", day + 1);
	return 0;
}