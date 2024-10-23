#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void) {
    float eingabe = 0;
    double ergebnis = 0;
    while (true) {
    printf("Aus welcher Zahl soll die Wurzel berechnet werden?\n");
    scanf("%f", &eingabe);
    if (eingabe < 0) {
        printf("Eingabe muss positiv sein!\n");
    } else {
        break;
    }
    }
    ergebnis = sqrt(eingabe);
    printf("Das Ergebnis der Wurzelrecnung: %f\n", ergebnis);
}
