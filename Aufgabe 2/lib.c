#include <stdio.h>
#include <math.h>

#ifndef LIB_H
#define LIB_H

int f1 (void);
int f2(void);
void f3(int a, int b);
void f4(int a, int b);
void f5(int a, int b);
void f6(int a, int b);
void f7(int a, int b);
void f8(double a);

#endif

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
    printf("%d + %d = %d\n",a, b, a + b);
}
void f4(int a, int b) // Ausgabe Produkt
{
    printf("%d * %d = %d\n",a, b, a * b);
}
void f5(int a, int b) // Ausgabe Subtraktion
{
    printf("%d - %d = %d\n",a, b, a - b);
}
void f6(int a, int b) // Ausgabe Division mit Div0 Prüfung
{
    if (b == 0)
    {
        printf("Fehler! Divident darf nicht 0 sein\n");
    } else
    {
        printf("%d / %d = %f\n", a, b, (float) a / (float) b);
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
void f8(double a) // Quadratwurzel für Zahl1 nach Heron-Verfahren
{
    double xn = (double)a;
    double xn1 = xn;
    if (a < 0) {
        printf("Fehler! Zahl darf nicht negatif sein!\n");
    } else {
        do {
            xn = xn1;
            xn1 = (xn + (a/xn)) / 2;

        } while ((xn - xn1) > 0.0000000001);
        printf("Wurzel aus %d mit Heron verfahren: %lf\n", (int)a, xn1);
    }
}
