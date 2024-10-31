#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{

    int input;
    char OK;
    bool again = true;
    time_t sec;
    int zz;

    do
    // Schleife für das Spiel, so lange der user j/J eingibt
        {
            sec = time (NULL); //Zeit in Sekunden ermitteln
            srand((int)sec); // Initialisierung
            zz = (rand() % 15) + 1;
            for (int i = 3; i > 0; i--)
            //Spiel mit 3 Leben und Prüfung, ob die Zahl richtig/zu hoch/zu niedrig ist
            {
                printf("Ihre Zahl:\n");
                scanf("%d", &input);
                if (input == zz) // Case unwahrscheinlich --> letzter Case
                {
                    printf("Correct!\n");
                    break;
                } else if (input > zz)
                {
                    printf("Your number too hight");
                } else
                {
                    printf("Your number too low");
                }
                    printf("\nLives left: %d\n", i - 1);

            }
            printf("The number was: %d\n", zz);
            printf("Try again? (j/J; n/N)\n");
            scanf(" %c", &OK);
            switch(OK) {
                case 'j': ;
                case 'J': break;
                case 'n': ;
                case 'N': again = false;
            }
        } while (again);
        return 0;
}
