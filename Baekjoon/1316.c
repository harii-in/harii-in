#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int check(char str[], int len) {
	char checker;
	for (int i = 0; i < len; i++) {
		if (str[i] != str[i + 1]) {
			checker = str[i];
			for (int j = i + 1; j < len; j++) {
				if (checker == str[j])
					return 0;
			}
		}
	}
	return 1;
}

int main() {
	int n;
	int cnt = 0;
	char str[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", &str);
		cnt += check(str, strlen(str));
	}
	printf("%d\n", cnt);
	return 0;
}