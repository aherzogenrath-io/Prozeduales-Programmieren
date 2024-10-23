#include <stdio.h>

int main(void)
{
    int input;
    int result = 1;
    printf("Eingabe:\n");
    scanf("%d", &input);
    for (int i = 0; i < input; i++) {
        result = result * (input - i);
    }
    printf("Result: %d\n", result);
    return 0;
}
