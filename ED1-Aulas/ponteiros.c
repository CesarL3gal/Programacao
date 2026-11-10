#include <stdio.h>
int main(){
    int n=10;
    int *p; // declara ponteiro tipo int
    /*
    pode tambem apontar um inteiro assim int *x=&n ( normalmente nao pode
    ter * pois entra na posicao, mas como ta declarando o ponteiro entao pode)
    */
    p=&n; //salva endereco de n em p

    printf("%d\n",*p); //imprime valor salvo na posicao do endereco
    *p=20; //muda o valor do que esta salvo no endereco apontado
    printf("%d\n",*p); //imprime valor salvo na posicao do endereco

    printf("%p\n",p); //valor do endereco
    printf("%d\n",p); //valor do endereco

    return 0;
}