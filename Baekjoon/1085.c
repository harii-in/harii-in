#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int x, y, w, h;
	int row_b, row_t, col_l, col_r;
	int row_min, col_min;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	row_t = h - y;
	row_b = y;
	col_r = w - x;
	col_l = x;
	
	if (row_b <= row_t)
		row_min = row_b;
	else
		row_min = row_t;
	if (col_l <= col_r)
		col_min = col_l;
	else
		col_min = col_r;
	if (col_min <= row_min)
		printf("%d\n", col_min);
	else
		printf("%d\n", row_min);
	return 0;
}