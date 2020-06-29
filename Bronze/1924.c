#include<stdio.h>

int main() {
	int x, y, ans, i;

	scanf("%d %d", &x, &y);
	
	for (i = 1; i < x; i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			y += 31;
		else if (i == 4 || i == 6 || i == 9 || i == 11)
			y += 30;
		else if (i == 2)
			y += 28;
	}
	
	ans = y % 7;

	switch(ans) {
	case 1:
		printf("MON\n");
		break;
	case 2:
		printf("TUE\n");
		break;
	case 3:
		printf("WED\n");
		break;
	case 4:
		printf("THU\n");
		break;
	case 5:
		printf("FRI\n");
		break;
	case 6:
		printf("SAT\n");
		break;
	case 0:
		printf("SUN\n");
		break;
	default:

		break;
	}

	return 0;
}
