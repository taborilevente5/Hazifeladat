#include <stdio.h>
#include <string.h>


void read_from_keyboard(char c[], int size)
{
    fgets(c, size, stdin);
}

int main()
{
    char szo[100];
    int szo_db = 0;
    int max_hossz = 0;

    printf("Adj meg szavakat '*' végjelig!\n");

    while (1)
    {
        printf("Szó: ");
        read_from_keyboard(szo, 100);

        if (szo[0] == '*' && szo[1] == '\0' || szo[1] == '\n')
        {
            break;
        }
        szo_db++;

        int i = 0;
        while (szo[i] != '\0')
        {
            i++;
        }
        if (i > max_hossz)
        {
            max_hossz = i;
        }
    }
    
    printf("\n%d db szót adtál meg. A leghosszabb szó %d karakterből áll\n",szo_db, max_hossz);





    return 0;
}