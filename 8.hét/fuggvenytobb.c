#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void statisztika(int tomb[], int meret, int *min, int *max, double *atlag){
    *min = tomb[0];
    *max = tomb[0];
    int osszeg = 0;

    for(int i=0; i < meret; ++i){
        if(tomb[i] < *min) *min = tomb[i];
        if(tomb[i] > *max) *max = tomb[i];
        osszeg += tomb[i];
    }
    *atlag = (double)osszeg/meret;
}

int main(){
    int szamok[10];
    int legkisebb, legnagyobb;
    double atlag_eretek;
    srand(time(NULL));

    printf("A tömb elemei: ");
    for(int i=0; i < 10; i++){
        szamok[i] = rand() % 90 + 10;
        printf("%d ", szamok[i]);
    }
    printf("\n");
    statisztika(szamok,10,&legkisebb,&legnagyobb,&atlag_eretek);
    printf("legkissebb elem: %d\n", legkisebb);
    printf("legnagyobb elem: %d\n", legnagyobb);
    printf("az elemek átlaga: %.1f\n", atlag_eretek);

    return 0;
}