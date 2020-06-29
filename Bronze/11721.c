#include <stdio.h>

int main(){
	char *string;
	char *ptr_sliced_string;
	int chars = 1;
	string = (char *) calloc(100, sizeof(char));
	ptr_sliced_string = (char *)calloc(11, sizeof(char));
	scanf("%s", string);

	for(int pos = 0; pos < 10; pos++){
		if(chars == 0){
			break;
		}
		strncpy(ptr_sliced_string, string + (pos * 10), 10);

		printf("%s%n\n", ptr_sliced_string, &chars);
	}
}
