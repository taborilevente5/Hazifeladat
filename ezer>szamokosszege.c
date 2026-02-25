#include <stdio.h>

int main(){
    int szamok = 0;
    for(int i=1;i<1000;++i){
        if(i%3 == 0 || i%5 == 0){
            szamok += i;
        }
        
    }
    printf("3-mal és 5-tel osztható számok összege:%d\n",szamok);
}