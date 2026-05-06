#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp = fopen("valos_szamok.txt", "r");
    if (fp == NULL){
        fprintf(stderr, "Hiba! A valos_szamok.txt nem nyitható meg!\n");
        return 1;
    }
    long double osszeg = 0.0L;
    char sor[128];

    while (fgets(sor, sizeof(sor), fp) != NULL)
    {
        for(int i=0; sor[i] != '\0'; ++i){
            if (sor[i] == ','){
                sor[i] = '.';
            }
        }

        char *vege;
        long double ertek = strtold(sor, &vege);
        osszeg += ertek;

    }
    printf("%.20Lf\n", osszeg);
    fclose(fp);

    return 0;

}