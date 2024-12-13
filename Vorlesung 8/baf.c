#include <stdio.h>
#include <stdlib.h>
#include "elem.h"

QueueEl_t *first = NULL;

void befehlsabfrage(void) {


    int input = 0;

    do {

        printf("1. Eingabe der Zahl\n1. Element loeschen\n3. Element einfuegen\n4. Beenden\n\nEingabe: ");
        scanf("%d", &input);
        switch(input) {
            case 1: InsertE();
                    break;
            case 2: DelE();
                    break;
            case 3: PrintE();
                    break;
        }
    } while (input != 4);

}


int InsertE(QueueEl_t j) {

}

int DelE(QueueEl_t j) {

}

void PrintE(void){

}
