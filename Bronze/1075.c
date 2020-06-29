#include <stdio.h>

int main(){
    int N, F, candidate_arr[100], result;
    int i, j = 0;
    scanf("%d", &N);
    scanf("%d", &F);
   
    for(i = 0; i < 100; i++){
        if(!(((N / 100) * 100 + i) % F)){
            candidate_arr[j] = i;
            j++;
        }
    }

    result = candidate_arr[0];
    if(result < 10){
        printf("0%d", result);
    }
    else{
        printf("%d", result);
    }  

    return 0;
}  

