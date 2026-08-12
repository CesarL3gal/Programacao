#include <stdio.h>
int recusiva(){
    int atual = getchar();
    if(atual=='\n'){
        return 0;
    }
    int soma=(atual-'0') + recusiva();
    return soma;
}   

int main(){
    long long int soma = recusiva();
    printf("%lld",soma);

    return 0;
}
