#include<stdio.h>

int main() {
	int n, i, sum;

	scanf("%d", &n);
	sum = n;

	for (i = 0; i < n; i++) {
		sum += i;
	}
	printf("%d", sum);
	
	return 0;
}