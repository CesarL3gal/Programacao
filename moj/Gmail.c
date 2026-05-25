#include <stdio.h>
int main(){
    char Nome[100];
    char Sobrenome[100];
    char NomeCompleto[1000];
    int i=0;
    char c;
    while(( c=getchar() ) != '\n'){
        NomeCompleto[i]=c;
        i++;
    }
    NomeCompleto[i] = '\0' ;
    // printf("%s", NomeCompleto);
    int last=0; 
    i=0;
    for(i=0; NomeCompleto[i]!=' '; i++){
        Nome[i]=NomeCompleto[i];
    }
        Nome[i]='\0';

    //printf("%s\n", Nome);

    i=0;
    for(i=0; NomeCompleto[i]!='\0';i++){
        if(NomeCompleto[i]==' '){
            last=i;
        }
    }

    int j=0;

    for(i=last+1; NomeCompleto[i]!='\0'; i++){
        Sobrenome[j]=NomeCompleto[i];
        j++;
    }
    Sobrenome[j]='\0';

    //printf("%s\n", Sobrenome);
    printf("%s.%s@unb.br",Nome,Sobrenome);
    return 0;
}