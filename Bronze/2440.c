#include<stdio.h>

int main() {
	int n, i, j, k;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (k = i; k < n; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
