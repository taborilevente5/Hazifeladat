#include <stdio.h>

int legkisebb(int tomb[], int meret)
{
    int min = tomb[0];
    for (int i=1; i<meret; ++i)
    {
        if (tomb[i] < min)
        {
            min = tomb[i];
        }
    }
    return min;
}

int legnagyobb(int tomb[], int meret)
{
    int max = tomb[0];
    for (int i=1; i < meret; ++i)
    {
        if (tomb[i] > max)
        {
            max = tomb[i];
        }
    }
    return max;
}

int main()
{
    int szamok[] = {12, 13, 3, 42, 56, 99, 100, 101};
    int n = 8;

    printf("A tömb elemei: 12, 13, 3, 42, 56, 99, 100, 101\n");
    printf("A legkisebb elem: %d\n", legkisebb(szamok, n));
    printf("A legnagyobb elem: %d\n", legnagyobb(szamok, n));
    return 0;
}
