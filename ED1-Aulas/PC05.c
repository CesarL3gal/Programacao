#include <stdio.h>

int somarVetor(int v[],int n){
    if(n==0){
        return 0;
    }
    if(n<0){
        return -1;
    }
    return v[n-1] + somarVetor(v,n-1);
}
int contarValor(int v[], int n, int x){
    int soma;

    if(n==0){
        return 0;
    }

    soma = contarValor(v,n-1,x);

    if(v[n-1]==x){
        return soma + 1;
    }
    return soma;
}
int main(){
    /* Teste Livre, Escreva o que quiser e vai soltar o teste e a
    */
    printf("\nTeste Livre, Escreva n e n linhas do vetor\n");
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    int soma = somarVetor(v,n);
    int soma2= contarValor(v,n,2);
    printf("Soma Vetor do Teste Livre : %d \n",soma);
    printf("Contar número de vezes que v[i]==2 do Teste Livre : %d \n",soma2);

    // Teste 1
    printf("\nTeste 1\n");
    n=6; //6 itens no vetor
    int v2[]={1,2,3,4,5,6};
    soma = somarVetor(v2,n);
    soma2= contarValor(v2,n,2);
    printf("Soma Vetor do Teste1 : %d \n",soma);
    printf("ContarValor = 2 do Teste1 : %d \n",soma2);
    /*
    Resultado Esperado do Soma Vetor : 21
    Resultado Esperado do Conta Valor : 1
    */


    return 0;
}