#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Eredmenyek{
    int min;
    int max;
    double atlag;
};

struct Eredmenyek szamitas(int tomb[], int meret)
{
    struct Eredmenyek szam;

    szam.min = tomb[0];
    szam.max = tomb[0];
    int osszeg = 0;

    for(int i=0; i < meret; ++i){
        if(tomb[i] < szam.min) szam.min = tomb[i];
        if(tomb[i] > szam.max) szam.max = tomb[i];
        osszeg += tomb[i];
    }
    szam.atlag = (double)osszeg/meret;
    return szam;
}


int main(){
    int szamok[10];
    srand(42);
    printf("A tömb lemei: ");
    for(int i=0; i < 10; ++i){
        szamok[i] = rand() % 90+10;
        printf("%d ", szamok[i]);
    }
    printf("\n");
    struct Eredmenyek stat = szamitas(szamok, 10);
    printf("legkissebb elem: %d\n", stat.min);
    printf("legnagyobb elem: %d\n", stat.max);
    printf("az elemek átlaga: %.1f\n", stat.atlag);

    return 0;
    
}
