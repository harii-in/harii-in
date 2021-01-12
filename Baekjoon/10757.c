#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define StoD(x) (x==0 ? 0:x-'0')

void reverse(char* str, int len) {
	char tmp;
	for (int i = 0; i < len / 2; i++) {
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
	}
	return;
}

char a[100000], b[100000], result[100001];
int main() {
	int len;
	int up = 0;

	scanf("%s", &a);
	scanf("%s", &b);
	
	reverse(a, strlen(a));
	reverse(b, strlen(b));

	if (strlen(a) > strlen(b))
		len = strlen(a);
	else
		len = strlen(b);

	for (int i = 0; i <= len; i++) {
		result[i] = (StoD(a[i]) + StoD(b[i]) + up) % 10 + '0';
		if ((StoD(a[i]) + StoD(b[i]) + up) > 9)
			up = 1;
		else
			up = 0;
	}
	if (result[len] == '0')
		result[len] = 0;
	reverse(result, strlen(result));
	printf("%s\n", result);
	return 0;
}