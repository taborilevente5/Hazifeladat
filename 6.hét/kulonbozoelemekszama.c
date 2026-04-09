#include <stdio.h>

int main()
{
    int index[100] = {0};
    int szam;
    int kulonbozo_db = 0;

    printf("Adj meg 0 végjelig egész számokat az [1, 99] intervallumon!\n");

    do
    {
        printf("Szám: ");
        scanf("%d", &szam);
        if (szam == 0)
        {
            break;
        }
        if (szam < 1 || szam > 99)
        {
            printf("Ez a szám kívül esik az elfogadott intervallumon!\n");
        }
        else
        {
            if (index[szam] == 0)
            {
                kulonbozo_db++;
                index[szam] = 1;
            }
        }
    } 
    while (szam != 0);
    
    printf("\n%d db különböző szám lett megadva.\n", kulonbozo_db);

    if (kulonbozo_db > 0)
    {
        printf("Ezek növekedő sorrendben: ");

        int kiirt_db = 0;
        for (int i = 1; i < 100; ++i)
        {
            if (index[i] == 1)
            {
                printf("%d", i);
                kiirt_db++;
                
                if (kiirt_db < kulonbozo_db)
                {
                    printf(", ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}