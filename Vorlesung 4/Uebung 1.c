#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    struct UnserDatenTyp
    {
        char name[40];
        unsigned int matrikel;
        bool proseminar;
    };
    struct UnserDatenTyp student = { "Max Mustermann", 44944, true};
    printf("%d\n", student.matrikel);
    printf("%s", student.name);
}
