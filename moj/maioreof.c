#include <stdio.h>
int main(){
    int numero;
    int maior=0;
    while(scanf("%d",&numero)!=EOF){
        if(numero>maior){
            maior=numero;
        }
    }
    printf("%d",maior);
    return 0;
}