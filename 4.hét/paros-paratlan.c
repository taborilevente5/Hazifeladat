#include <stdio.h>

int is_even(int n)
{
    if(n%2 == 0)
    {
        return 1;
    }
    return 0;
}

int is_odd(int n)
{
    if(n%2 != 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    printf("Adj meg egy számot: ");
    scanf("%d", &n);

    if (is_even(n))
    {
        printf("A szám páros.\n");
    }
    else if (is_odd(n))
    {
        printf("A szám páratlan.\n");
    }


    return 0;
}