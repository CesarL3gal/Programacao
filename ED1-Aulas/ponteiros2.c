#include <stdio.h>
void zerar (int *p){
    *p=0;
}
void zerar_antigo(int x){
    x=0; /*nao funciona, pois recebe uma copia de x, ja que declara ele no () da funcao
    ja o que recebe o ponteiro funciona, pois aponta para o endereco da funcao verdadeira
    */
}
int main(){
    int x=2131;
    printf("%d\n",x);
    zerar(&x);
    printf("%d\n",x);
    return 0;
}