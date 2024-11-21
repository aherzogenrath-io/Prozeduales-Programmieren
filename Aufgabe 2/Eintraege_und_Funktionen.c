#include <stdio.h>
#include <stdbool.h>
#include "lib.h"


int main (void)
{
    int auswahl;
    int z1 = 0;
    int z2 = 0;
    bool OK = true;
    char weiter;

    do
    {
        printf("\"1 = Eingabe Zahl 1\"\n");
        printf("\"2 = Eingabe Zahl 2\"\n");
        printf("\"3 = Ausgabe Summe\"\n");
        printf("\"4 = Ausgabe Produkt\"\n");
        printf("\"5 = Ausgabe Subtraktion\"\n");
        printf("\"6 = Ausgabe Ausgabe Division mit Div0 Prüfung\"\n");
        printf("\"7 = Ausgabe aller möglichen Multiplikationen von (1...Zahl1)*(1...Zahl2)\"\n");
        printf("\"8 = Quadratwurzel für Zahl1 nach Heron-Verfahren\"\n");
        printf("\"9 = Beenden\"\n\n");
        printf("Auswahl: ");
        //Ausgabe Menü

        scanf("%d", &auswahl);
        //Eingabe Auswahl

        switch (auswahl)
        {
            case 1:
                z1 = f1();
            break;
            case 2:
                z2 = f2();
            break;
            case 3:
                f3(z1, z2);
            break;
            case 4:
                f4(z1, z2);
            break;
            case 5:
                f5(z1, z2);
            break;
            case 6:
                f6(z1, z2);
            break;
            case 7:
                f7(z1, z2);
            break;
            case 8:
                if (z1 < 0) {
                    printf("Fehler! Zahl muss positiv sein");
                    break;
                } else {
                printf("\nWurzel von %d Berechnet mit Heron-Verfahren: %lf\n", z1, f8((double)z1, (double)z1));
                break;
                }
            break;
            case 9:
                OK = false;
            break;
            default:
            break;
        }
        if (OK == false)
        {
            break;
        }
        printf("\nWeiter? (j;J / n;N)\n");
        scanf(" %c", &weiter);
        switch(weiter)
        {
            case 'j': ;
            case 'J':
                break;
            case 'n': ;
            case 'N':
                OK = false;
                break;
            default:
                printf("Falscher Input!\n");
                OK = false;
                break;
        }
    } while (OK);

    return 0;
}
