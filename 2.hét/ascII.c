#include <stdio.h>

int main(){
    int osszeg = 0;
    for(char c='A'; c<='Z'; c++){
        osszeg += c;
    }
    printf("A nagybetűk összege az ASCII alapján:%d\n", osszeg);

    return 0;
}