#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int plus() {
    int a, b = 0;
    printf("Enter first number:\n");
    scanf("%d", &a);
    printf("Enter second number:\n");
    scanf("%d", &b);
    return a + b;
}

int minus() {
    int a, b = 0;
    printf("Enter first number:\n");
    scanf("%d", &a);
    printf("Enter second number:\n");
    scanf("%d", &b);
    return a - b;
}

float divide() {
    int a, b = 0;
    printf("Enter first number:\n");
    scanf("%d", &a);
    printf("Enter second number:\n");
    scanf("%d", &b);
    if (b == 0) {
        printf("Error! Cannot devide by 0\n");
        return NULL;
    } else {
        return a / b;
    }
}

int multiply() {
    int a, b = 0;
    printf("Enter first number:\n");
    scanf("%d", &a);
    printf("Enter second number:\n");
    scanf("%d", &b);
    return a * b;
}


int main(void) {
    char operation;
    int valid = 0;
    int a, b = 0;
    while (!valid) {
    printf("Welche Rechenoperation (+   -   /   *):\n");
    operation = getchar();
    if (operation == '+' || operation == '-' || operation == '/' || operation == '*') {
        valid = 1;
    } else {
        printf("Ungueltiger Operator \n\n");
    }
    }

    switch(operation) {
        case '+':
        printf("Result: %d\n", plus());
        break;
        case '-':
        printf("Result: %d\n", minus());
        break;
        case '/':
        printf("Result: %d\n", divide());
        break;
        case '*':
        printf("Result: %d\n", multiply());
        break;
    }

}
