#include <iostream>
#include <stack>

using namespace std;

void wrap_push(int value);
void wrap_pop();
void print_result(int sequenceCount);

stack<int> s;
int *ptrResult = NULL, resultIndex = 0;

int main(){
    int sequenceCount = 0, sequenceInput = 0, top = 0, nextTop = 1;
    s.push(0);

    scanf("%d", &sequenceCount);                               // after input count
    if (sequenceCount > 100000){
        exit(1);
    }

    ptrResult = (int *) calloc(sequenceCount * 100, sizeof(int));     // pre-allocate +- space
    
    for (int i = 0; i < sequenceCount; i++){
        scanf("%d", &sequenceInput);                           // get number
        if(sequenceInput == 0){
            i--;
            continue;
        }

		top = s.top();
        if (top < sequenceInput){                      // ex) 8 | 4 - '6' - ...
            for (; top < sequenceInput;){
                wrap_push(nextTop++);
                top = s.top();
            }
            wrap_pop();
	    }
        else if (top == sequenceInput){
            wrap_pop();
        }
        else {
        	printf("NO\n");
        	exit(1);
        }
    }   

    print_result(sequenceCount);
    return 0;
}

void wrap_push(int value){
    s.push(value);
    ptrResult[resultIndex++] = '+';
}

void wrap_pop(){
    s.pop();
    ptrResult[resultIndex++] = '-';
}

void print_result(int sequenceCount){
    for (int i = 0; i < sequenceCount * 100; i++){
        if (ptrResult[i] != '+' && ptrResult[i] != '-'){
            break;
        }   
        printf("%c\n", ptrResult[i]);
    }
}

