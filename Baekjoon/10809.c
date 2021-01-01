#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main() {
	char str[1024];

	scanf("%s", &str);
	for (int i = 97; i <= 122; i++) {
		int j = 0;
		while (str[j] != '\0') {
			if (str[j] == (char)i) {
				break;
			}
			j++;
		}
		if (str[j] == (char)i)
			printf("%d ", j);
		else
			printf("-1 ");
	}
	return 0;
}