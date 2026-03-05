#include <stdio.h>
#include <stdlib.h>


int main(){
    int n;
    printf("Magasság: ");

    if (scanf("%d", &n) != 1 || n<=0 || n%2 == 0){
        printf("A megadott szám nem megfelelő, csak pozitív páratlan számot fogadunk el\n");
        return 0;
    }

for (int i = 0; i<n; i++){
    int tavolsag = abs((n/2)-i);

    int szokozok = tavolsag;

    int csillagok = n - (2*tavolsag);

    for (int j=0; j< szokozok;j++){
        printf(" ");
    }

    for(int j=0; j<csillagok; j++){
    printf("*");
    }

    printf("\n");

    }

    return 0;

}