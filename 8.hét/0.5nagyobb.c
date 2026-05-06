#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *be = fopen("in.txt", "r");
    if (be == NULL){
        fprintf(stderr,"Hiba! Az in.txt nem nyitható meg!\n");
        return 1;
    }
    printf("# in.txt sikeresen megnyitva\n");
    FILE *ki = fopen("out.txt", "w");
    if (ki == NULL){
        fprintf(stderr,"Hiba! Az out.txt nem hozható létre!\n");
        fclose(be);
        return 1;
    }
    printf("# 0,5-nél nagyob szémok szűrése...\n");
    double szam;
    int db = 0;
    while (fscanf(be, "%lf", &szam) == 1)
    {
        if(szam > 0.5){
            fprintf(ki, "%f\n", szam);
            db++;
        }
    }
    printf("# szűrés vége\n");
    fclose(be);
    fclose(ki);
    printf("# out.txt bezárva\n");
    printf("# out.txt-be kiírt számok mennyisége: %d db\n", db);


    return 0;
}