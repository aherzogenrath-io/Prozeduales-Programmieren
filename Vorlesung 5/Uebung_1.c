#include <stdio.h>

int main(void)
{
    int i = 0;
    {
        int i;

        i = 84;

        i = 99;
    }
    for (int i = 0; i < 10; ++i)
    {
        printf("%d\n", i);
    }

    printf("%d", i);
}
