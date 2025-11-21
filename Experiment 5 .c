/*
Name: ASHAZ SHAKIR PATEL
UIN: 251M003
Class: FE Mechanical Engineering
Div: F
*/
#include <stdio.h>

int iterative_fact(int num) {
    int fact = 1;
    for (int i = num; i >= 1; i--) {
        fact = fact * i;
    }
    return fact;
}

int fact(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * fact(num - 1);
    }
}

int main() {
    int a ;
    printf("Enter a Number:");
     scanf("%d", &a);
     printf("Factorial of %d is %d\n", a, iterative_fact(a));
   
    return 0;
}
