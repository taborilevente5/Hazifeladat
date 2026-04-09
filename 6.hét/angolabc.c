#include <stdio.h>

char* feltoltes(char *tomb)
{
    int i;
    for (i = 0; i < 26; ++i)
    {
        tomb[i] = 'a' + i;
    }

    tomb[i] = '\0';

    return tomb;
}

int main()
{
    char abc[27];

    feltoltes(abc);

    printf("Az angol abc kisbetűi: %s", abc);

    printf("\n");
    
    return 0;
}