#include <stdio.h>

void ir_tomb(int tomb[], int meret)
{
    for (int i=0; i < meret; ++i)
    {
        printf("%d", tomb[i]);
    
        if(i < meret -1)
        {
            printf(", ");
        }
    
    }
    printf("\n");

}

void pozitiv(int tomb[], int meret)
{
    for (int i = 0; i < meret; ++i)
    {
        if(tomb[i] < 0)
        {
            tomb[i] = -tomb[i];
        }
    }
}

int main()
{
    int szamok[]={1, 3, -4, -1, 7};
    int meret = 5;

    printf("Előtte:\n");
    ir_tomb(szamok,meret);

    pozitiv(szamok,meret);

    printf("Utána:\n");
    ir_tomb(szamok,meret);

    return 0;

}