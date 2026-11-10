#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int codigo;
    int quantidade;
}Registro;

Registro *criarRegistros(int n){
    Registro *v;
    v = calloc(n,sizeof(Registro));
    return v;
}

int totalQuantidades(Registro v[], int n){
    int soma=0;
    if(v!=NULL){
        for(int i=0;i<n;i++){
            soma+=v[i].quantidade;
        }
    }
    return soma;
}
int main(){
    printf("Teste1\n");
    Registro *v;
    int total;
    v=criarRegistros(3);
    if(v!=NULL){
        v[0].codigo = 10;
        v[0].quantidade = 4;
        v[1].codigo = 20;
        v[1].quantidade = 9;
        v[2].codigo = 30;
        v[2].quantidade = 2;
    }
    total = totalQuantidades(v,3);
    printf("Total: %d\n",total);

    printf("Teste2\n");
    Registro *v2;
    v2=criarRegistros(1);
    if(v2!=NULL){
        v2[0].codigo = 102;
        v2[0].quantidade = 7;
    }
    total = totalQuantidades(v2,1);
    printf("Total: %d\n",total);


    printf("Teste3\n");
    Registro *v3;
    v3=criarRegistros(2);
    total = totalQuantidades(v3,2);
    printf("Total: %d\n",total);

    printf("Teste4\n");
    Registro *v4;
    v4=criarRegistros(2);
    if(v4!=NULL){
        v4[0].codigo = 2020;
        v4[0].quantidade = 2020;
        v4[1].codigo = 2020;
        v4[2].quantidade = 2020;
    }
    total = totalQuantidades(v4,3);
    printf("Total: %d\n",total);


    free(v);
    free(v2);
    free(v3);
    free(v4);
    v=NULL;
    v2=NULL;
    v3=NULL;
    v4=NULL;

return 0;
}