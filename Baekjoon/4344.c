#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int c;
	int num;
	int score[1024];

	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		int sum = 0;
		scanf("%d", &num);
		for (int j = 0; j < num; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}
		double avg = (double)sum / num;
		int cnt = 0;
		for (int j = 0; j < num; j++) {
			if (score[j] > avg)
				cnt++;
		}
		printf("%.3lf%%\n", (double)cnt * 100 / num);
	}
	return 0;
}