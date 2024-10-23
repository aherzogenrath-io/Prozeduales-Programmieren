#include <stdio.h>

int main(void)
{
    int eingabe;
    int result = 0;
    printf("Eingabe:\n");
    scanf("%d", &eingabe);
    for (int i = 0; i < eingabe; i ++) {
        result = result + (eingabe - i);
    }
    printf("Result: %d\n", result);
    return 0;
}
