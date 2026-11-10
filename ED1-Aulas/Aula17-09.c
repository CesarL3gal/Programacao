#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v;
    v =malloc(2);

    //ponteiro v tem o endere'co de n inteiros, basicamente sendo um vetor de tamanho n.
    //isso funciona em todos as versoes de C, enquanto o vetor[n]={} pode nao funcionar em todas as versoes de c
    if (v==NULL){
        printf("falha na alocacao\n");
        return 1;

    }
    for(int i=0;i<5;i++){
        v[i]=i*10;
    }
    for(int i=0;i<5;i++){
     printf("%d ",v[i]);
    }

    free(v);
    return 0;
}