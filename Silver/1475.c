#include <stdio.h>
#include <math.h>

int main(){ 
    int N, tmp_num;
    int ptr_num[9];
    int i;  

    scanf("%d", &N);

    for(i = 0; i < 9; i++){
        ptr_num[i] = 0;
    }

    tmp_num = N;
    if(tmp_num == 0){
        ptr_num[0]++;
    }

    while(tmp_num != 0){
        i = tmp_num % 10;
        tmp_num /= 10;
        switch(i){
            case 0:
                ptr_num[0]++;
                break;
            case 1:
                ptr_num[1]++;
                break;
            case 2:
                ptr_num[2]++;
                break;
            case 3:
                ptr_num[3]++;
                break;
            case 4:
                ptr_num[4]++;
                break;
            case 5:
                ptr_num[5]++;
                break;
            case 6:
                ptr_num[6]++;
                break;
            case 7:
                ptr_num[7]++;
                break;
            case 8:
                ptr_num[8]++;
                break;
            case 9:
                ptr_num[6]++;
                break;
            default:
                printf("ERROR!!!\n");
                return;
        }
    }
    ptr_num[6] = (int)ceil(((float)ptr_num[6] / 2));

    int max = 0;
    for(i = 0; i < 9; i++){
        if(ptr_num[i] > max){
            max = ptr_num[i];
        }
    }

    printf("%d", max);

    return 0;
}
