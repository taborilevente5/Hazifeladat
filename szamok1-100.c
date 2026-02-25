#include <stdio.h>

int main(){
    int osszeg = 0;
    for (int i=1; i<=100; ++i){
        osszeg += i;
    }
    printf("Az szamok összegek 1-100-ig:%d\n", osszeg);

    return 0;

}
