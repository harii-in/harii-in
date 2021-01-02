#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
int main() {
	char str[1000003];
	int cnt = 0;

	fgets(str, 1000003, stdin);

	int i = 0;
	while (str[i] != '\0') {
		if (str[i] == ' ')
			cnt++;
		if (str[i] == '\n')
			cnt++;
		i++;
	}
	if (str[0] == ' ' || str[0] == '\n')
		cnt--;
	if (str[strlen(str) - 2] == ' ')
		cnt--;
	printf("%d", cnt);

	return 0;
}