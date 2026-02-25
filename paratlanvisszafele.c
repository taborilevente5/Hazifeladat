#include <stdio.h>

int main(){
    int n;
    printf("Adj meg egy pozitív egész számot:\n");
    scanf("%d",&n);
    for(int i=1;n>=i;--n){
        if(n%2!=0) printf("%d\n",n);
    }
    
    return 0;

}