#include <stdio.h>

unsigned long int rectFib(int n);

int main(){
    int n;

    scanf("%d", &n);

    printf("%lu\n", rectFib(n));

    return 0;
}

unsigned long int rectFib(int n){
    unsigned long int fib[n];

    if(n == 0){
        return 0;
    }

    for(int i = 0; i < n; i++){
        if(i == 0){
            fib[i] = 1;
        }
        else if(i == 1)
        {
            fib[i] = fib[i-1] + 1;
        }
        else{
            fib[i] = (fib[i-1] + fib[i-2]) % 10007;
        }
    }

    return fib[n-1];
}
