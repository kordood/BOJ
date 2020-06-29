#include<stdio.h>

int main() {
	int i, sum = 0, cnt, n[100];
	char s[100];

	scanf("%d", &cnt);
	if (cnt < 1 || cnt > 100) {
		cnt = 0;
	}

	scanf("%s", &s);

	for (i = 0; i < cnt; i++) {

		n[i] = (int)s[i] - 48;
		sum += n[i];
	}
	printf("%d\n", sum);

	return 0;
}
