#include <stdio.h>
#include <string.h>
#include <stdbool.h>

const char* C_TEMPLATE =
"#include <stdio.h>\n\n"
"int main() {\n"
"   printf(\"Hello World!\\n\");\n"
"   return 0;\n"
"}\n";

const char* PY_TEMPLATE =
"def main():\n"
"   printf(\"Hello Python!\")\n\n"
"if __name__ == \"__main__\":\n"
"   main()\n";

void show_help(){
    printf("Használat: alap <nyelv>\n");
    printf("Elérhető nyelvek:\n");
    printf(" c      - Alap C forraskod(main.c)\n");
    printf(" python - Alap Python kod (main.py)\n");
    printf("Opciók:\n");
    printf(" -h, --help     - Segitség megjelenítése\n");
    printf(" -v, --version  - Verzio info\n");
}

int main(int argc, char *argv[]){
    if (argc < 2){
        show_help();
        return 0;
    }
    if(strcmp(argv[1], "-h")==0 || strcmp(argv[1],"--help")==0){
        show_help();
        return 0;
    }
     if(strcmp(argv[1], "-v")==0 || strcmp(argv[1],"--version")==0){
        printf("alap verzio: v1.0\n");
        return 0;
    }

    const char *template = NULL;
    const char *filename = NULL;

    if(strcmp(argv[1],"c")==0){
        template = C_TEMPLATE;
        filename = "main.c";
    }else if(strcmp(argv[1],"python")==0){
        template = PY_TEMPLATE;
        filename = "main.py";
    }else{
        printf("Hiba: A '%s' fajl mar létezik! Nem akarom felülírni.\n", filename);
        return 1;
    }

    FILE *check = fopen(filename,"r");
    if (check){
        fclose(check);
        printf("Hiba: A '%s' fájl márlétezik! Nem akarom felülírni.\n", filename);
        return 1;
    }

    FILE *f = fopen(filename, "w");
    if(f == NULL){
        printf("Hiba: Nem sikerült léterhozni a fájlt.\n");
        return 1;
    }

    fprintf(f,"%s",template);
    fclose(f);

    printf("Sikeres. '%s' létrehozva!\n",filename);



    return 0;
}