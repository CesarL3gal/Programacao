#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int soma=0,numero;
    for(int i=0;i<N;i++){
        scanf("%d",&numero);
        soma=soma+numero;
    }
    printf("%d",soma);
    return 0;
}