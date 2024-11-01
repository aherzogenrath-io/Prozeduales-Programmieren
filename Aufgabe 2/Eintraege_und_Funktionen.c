#include <stdio.h>
#include <stdbool.h>

int f1 (void) // Eingabe Zahl 1
{
    int z1;
    printf("\nEingabe Zahl 1: ");
    scanf("%d", &z1);
    return z1;
}
int f2(void) // Eingabe Zahl 2
{
    int z2;
    printf("\nEingabe Zahl 2: ");
    scanf("%d", &z2);
    return z2;
}
void f3(int a, int b) // Ausgabe Summe
{
    printf("Summe: %d\n", a + b);
}
void f4(int a, int b) // Ausgabe Produkt
{
    printf("Produkt: %d\n", a * b);
}
void f5(int a, int b) // Ausgabe Subtraktion
{
    printf("Subtraktion: %d\n", a - b);
}
void f6(int a, int b) // Ausgabe Division mit Div0 Prüfung
{
    if (b == 0)
    {
        printf("Error! Cannot divide by zero\n");
    } else
    {
        printf("Division: %f\n", (float) a / (float) b);
    }
}
void f7(int a, int b) // Ausgabe aller möglichen Multiplikationen von (1...Zahl1) * (1...Zahl2)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            printf("%d * %d = %d \t", i, j, i * j);
        }
        printf("\n");
    }
}
float f8(int a, int b) // Quadratwurzel für Zahl1 nach Heron-Verfahren
{

}
int main (void)
{
    int auswahl;
    int z1;
    int z2;
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

            break;
            case 9:

            break;
            default:
        }
        printf("\nContinue? (j;J / n;N)\n");
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
                OK = false;
                break;
        }
    } while (OK);




    return 0;
}
