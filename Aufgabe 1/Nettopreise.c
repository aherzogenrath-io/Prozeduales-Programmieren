#include <stdio.h>

int main(void) {
    float netto;
    printf("Ganzzahliger Nettopreis:\n");
    scanf("%f", &netto);
    for (int i = 0; i < 10; i++) {
        printf("%f\n", (netto + i) * 1.19);
    }
    return 0;
}
