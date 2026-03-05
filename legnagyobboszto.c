#include <stdio.h>

int legnagy_oszto(int szam){
    if (szam<=1) return 0;

    for (int i= szam /2; i>= 1; i--){
        if (szam % i == 0){
            return i;
        }
    }
    return 1;
}

int main(){
    printf("Az első 50 szám legnagyobb osztója:\n");

    for (int i=1; i<=50; i++){
        printf("%d A legnagyobb osztója:%d\n",i,legnagy_oszto(i));
    }
    return 0;
}