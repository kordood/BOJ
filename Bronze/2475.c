#include <stdio.h>
#include <math.h>

int main(){
    int verify = 0, num[5],  pow_num = 0;
    scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
    
    for(int i = 0; i < 5; i++){
        num[i] = (num[i] * num[i]) % 10;
        verify += num[i];
    }
    verify %= 10;
    
    printf("%d", verify);
    
    return 0;
}
