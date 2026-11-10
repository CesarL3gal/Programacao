#include <stdio.h>

typedef struct{
    int codigo;
    int quantidade;
}Registro;

int carregarRegistros(char nome[], Registro v[], int max){
    FILE *arq;
    arq = fopen(nome, "r");
    if(arq == NULL)
        return -1;
    int j=0;
    for(int i=0;i<max;i++){
        fscanf(arq,"%d %d", &v[i].codigo, &v[i].quantidade);
        j++;
    }

    fclose(arq);
    return j;
}

int salvarRegistros(char nome[],Registro v[],int n){
    FILE *arq;
    arq = fopen(nome, "w");
    if(arq == NULL)
        return -1;
    for(int i=0;i<n;i++){
        fprintf(arq,"%d %d\n", v[i].codigo, v[i].quantidade);
    }

    fclose(arq);
    return 1;
}

int main(){

    printf("Teste1\n");
    //Teste 1
    Registro origem[3] = {
    {10, 4},
    {20, 9},
    {30, 2}
    };
    Registro destino1[3];
    int n;
    salvarRegistros("teste.txt", origem, 3);
    n = carregarRegistros("teste.txt", destino1, 3);
    /* esperado:
    n == 3
    destino[0] == {10,4}
    destino[1] == {20,9}
    destino[2] == {30,2}
    */
    printf("n:%d\n",n);
    for(int i=0;i<3;i++){
        printf("destino[%d] == {%d,%d}\n",i,destino1[i].codigo, destino1[i].quantidade);
    }

    printf("\nTeste2\n");

    //Teste 2
    Registro destino2[2];
    n = carregarRegistros("teste.txt", destino2, 2);
    /* esperado:
    n == 2
    apenas os dois primeiros registros são carregados
    */
    printf("n:%d\n",n);
    for(int i=0;i<2;i++){
        printf("destino[%d] == {%d,%d}\n",i,destino2[i].codigo, destino2[i].quantidade);
    }


    printf("\nTeste3\n");
    //Teste 3
    Registro destino3[3];
    n = carregarRegistros("arquivo_que_nao_existe.txt",
    destino3, 3);
    /* esperado: n == -1 */
    printf("n:%d\n",n);
    //for(int i=0;i<3;i++){
    //    printf("destino[%d] == {%d,%d}\n",i,destino1[i].codigo, destino1[i].quantidade);
    //}

    return 0;
}
