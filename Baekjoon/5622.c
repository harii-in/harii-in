#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
int main() {
	int t = 0;
	char str[100];

	scanf("%s", &str);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 'A' && str[i] <= 'C')
			t += 3;
		else if (str[i] >= 'D' && str[i] <= 'F')
			t += 4;
		else if (str[i] >= 'G' && str[i] <= 'I')
			t += 5;
		else if (str[i] >= 'J' && str[i] <= 'L')
			t += 6;
		else if (str[i] >= 'M' && str[i] <= 'O')
			t += 7;
		else if (str[i] >= 'P' && str[i] <= 'S')
			t += 8;
		else if (str[i] >= 'T' && str[i] <= 'V')
			t += 9;
		else if (str[i] >= 'W' && str[i] <= 'Z')
			t += 10;
		else if (str[i] == 1)
			t += 2;
		else if (str[i] == 0)
			t += 11;
	}
	printf("%d", t);
	return 0;
}