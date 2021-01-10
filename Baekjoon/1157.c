#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char str[1000000];
int main() {
	int num[26] = { 0, };
	int cnt = 0;
	int x;
	scanf("%s", str);
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (islower(str[i]))
			str[i] = toupper(str[i]);
		num[str[i] - 65]++;
	}

	int max_num = num[0];
	for (int i = 1; i < 26; i++)
		if (max_num < num[i])
			max_num = max_num < num[i] ? num[i] : max_num;
	for (int i = 0; i < 26; i++) {
		if (max_num == num[i]) {
			cnt++;
			x = i + 65;
		}
	}

	if (cnt == 1)
		printf("%c\n", x);
	else
		printf("?\n");
	return 0;
}