#include <stdio.h>

/*
 * PC1 - Operacoes sobre vetores
 * Complete as funcoes abaixo.
 */

void imprimeVetor(int v[], int n)
{
    for(int i=0;i<n;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}

int somaVetor(int v[], int n)
{
    int soma=0;
    for(int i=0;i<n;i++){
        soma+=v[i];
    }
    return soma;
}

int indiceMaior(int v[], int n)
{
    int max=v[0];
    for(int i=0;i<n;i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    return max;
}

int contaOcorrencias(int v[], int n, int valor)
{
    int soma=0;
    for(int i=0;i<n;i++){
        if(v[i]==valor){
            soma++;
        }
    }
    return soma;
}

int buscaLinear(int v[], int n, int valor)
{
    int pos=-1;
    for(int i=0;i<n;i++){
        if(v[i]==valor){
            pos=i;
        }
    }
    return pos;
}

int main(void)
{
    int v1[6] = {4, 1, 7, 3, 2, 5};
    int v2[4] = {8, 8, 1, 0};

    printf("v1: ");
    imprimeVetor(v1, 6);

    printf("soma v1 = %d\n", somaVetor(v1, 6));
    printf("indice maior v1 = %d\n", indiceMaior(v1, 6));
    printf("ocorrencias de 3 em v1 = %d\n", contaOcorrencias(v1, 6, 3));
    printf("busca 2 em v1 = %d\n", buscaLinear(v1, 6, 2));
    printf("busca 9 em v1 = %d\n", buscaLinear(v1, 6, 9));

    printf("v2: ");
    imprimeVetor(v2, 4);

    printf("soma v2 = %d\n", somaVetor(v2, 4));
    printf("indice maior v2 = %d\n", indiceMaior(v2, 4));

    printf("Teste Personalizado com minha Matricula : 251035031\n");
    int v3[] = {2,5,1,0,3,5,0,3,1};
    printf("v3: ");
    imprimeVetor(v3, 9);
    printf("soma v3 = %d\n", somaVetor(v3, 9)); //esperado : 20
    printf("indice maior v3 = %d\n", indiceMaior(v3, 9)); //esperado : 5
    printf("ocorrencias de 3 em v3 = %d\n", contaOcorrencias(v3, 9, 3)); //esperado : 2
    printf("busca 2 em v3 = %d\n", buscaLinear(v3, 9, 2)); //esperado : 0 (posição 0 do vetor)
    printf("busca 9 em v3 = %d\n", buscaLinear(v3, 9, 9)); //esperado : -1 (não tem)
    return 0;
}
