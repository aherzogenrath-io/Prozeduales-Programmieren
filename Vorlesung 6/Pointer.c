#include <stdio.h>
#include <stdlib.h>

int main(void) {

    struct myStructT {
        char s[4096];
        double d;
        int i;
    };

    struct myStructT *k;

    //k = malloc(2345 * sizeof(struct myStructT));
    k = calloc(2345, sizeof(struct myStructT));

    printf("%d\n", k->i);

    char s[] = {'H', 'a', 'l', 'l', 'o', '\n'};
    char* pS = s;

    printf("%c%c\n", *pS, *(pS + 1));

    int t[] = {2, 4, 6, 8};

    int *pT = t;

    char *pH = malloc(sizeof(char) * 6);
    *pH = 'H';
    *(pH + 1) = 'a';
    *(pH + 2) = 'l';
    *(pH + 3) = 'l';
    *(pH + 4) = 'o';
    *(pH + 5) = '\0';

    printf("%s\n", pH);


    printf("s[] = %x : pH = %x\n", s, pH);

    char* pCT = t;

    printf("%d %d\n", *pT, *(pT + 1));
    printf("%d %d\n", *pCT, *(pCT + 4));

    return 0;
}
