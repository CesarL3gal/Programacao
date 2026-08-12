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
    while(scanf("[^\n]",texto)!=EOF){
        if(strcmp(texto,"0")==0){
            break;
        }
        if(strcpm(texto,"9")==0){
            printf("%lld is a multiple of 9 and has 9-degree %d.",numero,i);
        }
        
        char original[1010];
        strcopy(original,texto);
        int soma = soma_algarismos(original);
        int i=1;
        for(;soma>=9;){
            i++;
            if(soma==9){
                printf("%lld is a multiple of 9 and has 9-degree %d.",numero,i);
            }
        }
    }

    return 0;
}