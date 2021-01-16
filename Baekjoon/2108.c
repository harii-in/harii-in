#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int num[500001] = { 0, };
int cnt[8001] = { 0, };

int compare(const void* a, const void* b) {
	if (*(int*)a > * (int*)b)
		return 1;
	else if (*(int*)a < *(int*)b)
		return (-1);
	else
		return 0;
}

int cnt_max_find(int cnt[], int s) {
	int max = cnt[0];
	for (int i = 0; i < s; i++) {
		if (cnt[i] > max)
			max = cnt[i];
	}
	return max;
}

int main() {
	int n;
	int max = -4000; int min = 4000;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		sum += num[i];
		if (num[i] < min)
			min = num[i];
		if (num[i] > max)
			max = num[i];
		cnt[num[i] + 4000]++;
	}
	double avg = (double)sum / n;
	int check = 0;
	int mode;
	int cnt_max = cnt[0];
	cnt_max = cnt_max_find(cnt, 8001);
	for (int i = 0; i < 8001; i++)
		if (cnt_max == cnt[i])
			check++;
	for (int i = 0; i < 8001; i++) {
		if (check == 1) {
			if (cnt[i] == cnt_max) {
				mode = i - 4000;
				break;
			}
		}
		else {
			if (cnt_max == cnt[i]) {
				if (check == 0) {
					mode = i - 4000;
					break;
				}
				else
					check = 0;
			}
		}
	}
	qsort(num, n, sizeof(int), compare);
	printf("%.0f\n", avg);
	printf("%d\n", num[n / 2]);
	printf("%d\n", mode);
	printf("%d\n", max - min);
	return 0;
}