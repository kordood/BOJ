#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_DIGIT   13

int main(){
    unsigned int X = 1, tmp;
    char *number_array;
    number_array = (char *) calloc(MAX_DIGIT, sizeof(char));
    int N, count=1, jump = 1;
    char isjumped = 0, iscorrect = 0;
    
    scanf("%d", &N);

    if(N == 0){
        printf("0");
        return 0;
    }

    if(N >= 1023){
        printf("-1");
        return 0;
    }
    else if(N == 1022){
        printf("9876543210");
        return 0;
    }

    
    while(1){
        if(X > 9876543210){
            printf("-1");
            return 0;
        }
    
        if(count >= N){
            break;
        }
        
        if(!isjumped){
            X++;
        }

        isjumped = 0;

        tmp = X;
        for(int i = 0; tmp != 0 && i <= MAX_DIGIT; i++){
            number_array[i] = tmp % 10;
            number_array[i+1] = tmp / 10;
            tmp /= 10;
        }

        for(int i = 0; i <= MAX_DIGIT; i++){
            for(int j = MAX_DIGIT - 1; j > i; j--){
                if(number_array[j] == 0 ){         // well done!
                    iscorrect = 1;
                }
                else{
                    iscorrect = 0;
                    break;
                }
            }

            if(iscorrect){
                //printf("%d\n", X);
                count++;
                break;
            }

            if(number_array[i] < number_array[i+1]){
                continue;
            }
            else{
                if(i == 0){
                    jump = 1;
                    isjumped = 1;
                    break;
                }

                jump = (int) pow(10, (i+1));
                isjumped = 1;
                break;
            }
        }
        if(isjumped){
            X += jump;
            X = (X / jump ) * jump;
        }
    }

    printf("%u", X);
    return 0;
}
