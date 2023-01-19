#include <stdio.h>

/* 1st Term is 0, 2nd Term is 1, 3rd Term is 1, 4th Term is 2, ...*/
int calculateNthFibonacciTermIterative(int nthTerm) {

    int i = 0;
    int fibonacci[100];

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (i = 2; i < nthTerm; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    return fibonacci[i];
}

int main() {

    int nthTerm;
    printf("Enter the the desired term of the Fibonacci Sequence (e.g. '4th term is 2').\n");
    scanf("%d", &nthTerm);
    printf("The %d term of the Fibonacci Sequence is %d.", nthTerm, calculateNthFibonacciTermIterative(nthTerm));
    
}
