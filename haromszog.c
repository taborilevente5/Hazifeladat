#include <stdio.h>

int valid_triangle(int a, int b, int c)
{
    if (a <=0 || b <= 0 || c <= 0)
    {
        return 0;
    }
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main()
{
    int a, b, c;
    printf("Add meg a háromszög a oldalát: ");
    scanf("%d",&a);
    printf("Add meg a háromszög b oldalát: ");
    scanf("%d",&b);
    printf("Add meg a háromszög c oldalát: ");
    scanf("%d",&c);

    if(valid_triangle(a,b,c))
    {
        printf("Igen szerkeszthető\n");
    }
    else
    {
        printf("Nem szerkeszthető\n");
    }
        

    return 0;
}
