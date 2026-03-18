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

int main()
{
    int szamok[]={1,2,3,4,5};
    int n= sizeof(szamok) / sizeof(szamok[0]);
    ir_tomb(szamok, n);



    return 0;
}