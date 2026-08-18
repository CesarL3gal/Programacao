#include <stdio.h>
#include <string.h>
int soma_algarismos(char *numero){
    if(*numero=='\n' || *numero =='\0'){
        return 0;
    }
    int soma = (*numero-'0') + soma_algarismos(numero+1);
    return soma;    
}

int main(){
    char texto[1010];
    while(scanf("%s" ,texto)!=EOF){
        if(strcmp(texto,"0")==0){
            break;
        }
        char original[1010];
        strcpy(original,texto);
        int soma = soma_algarismos(texto);
        if(soma%9!=0){
            printf("%s is not a multiple of 9.\n",original);
        }
   else {
            // É múltiplo de 9, agora calculamos o grau
            int grau_atual = 1;
            int valor_atual = soma;
            
            while (valor_atual > 9) {
                // Transforma o valor atual em string para somar os dígitos de novo
                char aux[20];
                sprintf(aux, "%d", valor_atual);
                valor_atual = soma_algarismos(aux);
                grau_atual++;
            }
            
            printf("%s is a multiple of 9 and has 9-degree %d.\n", original, grau_atual);
        }
    }

    return 0;
}