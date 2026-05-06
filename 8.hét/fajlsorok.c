#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    if(argc < 2){
        fprintf(stderr,"Hiba! Adja meg egy szövegs állomány nevét!\n");
        return 1;
    }
    FILE *fp = fopen(argv[1], "r");
    if(fp==NULL){
        fprintf(stderr,"Hiba! A %s nevű fájlt nem sikerült megnyitni!\n", argv[1]);
        return 1;
    }

    int sorok_szama  = 0;
    int c;
    int utolso_karakter = EOF;

    while ((c = fgetc(fp)) != EOF)
    {
        if(c == '\n'){
            sorok_szama++;
        }
        utolso_karakter = c;
    }
    if(sorok_szama == 0 && utolso_karakter != EOF){
        sorok_szama = 1;
    }else if(utolso_karakter != EOF && utolso_karakter !='\n'){
        sorok_szama ++;
    }
    printf("%d\n",  sorok_szama);
    fclose(fp);

    return 0;

}