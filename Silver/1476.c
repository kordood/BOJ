#include <stdio.h>

#define MAX_E	15
#define MAX_S	28
#define MAX_M	19

int main(){
	int E, S, M;	
	char e = 0, s = 0, m = 0;
	unsigned int year = 0;
	scanf("%d %d %d", &E, &S, &M);
	
	while(1){
		if(E == e && S == s && M == m){
			break;
		}
		e++; s++; m++; year++;
		if(e > MAX_E){
			e = 1;
		}
		if(s > MAX_S){
			s = 1;
		}
		if(m > MAX_M){
			m = 1;
		}
	}

	printf("%d", year);

	return 0;
}
