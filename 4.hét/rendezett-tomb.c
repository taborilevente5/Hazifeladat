#include <stdio.h>

int rendeztomb(int tomb[], int meret)
{
    if (meret <= 1)
    {
        return 1;
    }
    else if(meret == 0)
    {
        return 1;
    }
    for (int i=0; i < meret -1; ++i)
    {
        if (tomb[i] > tomb[i + 1])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int rendezett[] = {1,2,3,4,5};
    int nem_rendezett[] = {1,10,23,4,1};

    int meret = 5;

    printf("Az első tömb rendezett?\n");
    if (rendeztomb(rendezett,meret))
    {
        printf("Igen\n");
    }
    else
    {
        printf("Nem\n");
    }

    printf("A második tömb rendezett?\n");
    if (rendeztomb(nem_rendezett,meret))
    {
        printf("Igen\n");
    }
    else
    {
        printf("Nem\n");
    }



    return 0;
}