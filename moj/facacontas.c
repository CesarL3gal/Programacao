#include <stdio.h>
int faz_conta_direito(int parcelas, char op){
    int vector[parcelas];
    for(int i=0;i<parcelas;i++){
        scanf("%d",&vector[i]);
    }
    int soma=vector[0];
    if(op=='+'){
        for(int i=1;i<parcelas;i++){
            soma=soma+vector[i];
        }
    }
    else{
        for(int i=1;i<parcelas;i++){
            soma=soma-vector[i];
        }
    }
    return soma;
}