#include <stdio.h>
int main(){
    //LUCAS BOAVENTURA DA()SILVA\0
    //LUCAS\0
    char NomeCompleto[101], Nome[101], Sobrenome[101];
    scanf("%[^\n]",NomeCompleto);
    int ultimo_espaco=0;
    int k=0;

    for(int i=0;NomeCompleto[i]!='\0';i++){
        if(NomeCompleto[i]>='A' && NomeCompleto[i]<='Z'){
            NomeCompleto[i]=NomeCompleto[i]+32;
        }
        if(NomeCompleto[i]==' '){
            ultimo_espaco=i;
        }
        if(ultimo_espaco==0){
            Nome[k]=NomeCompleto[i];
            k++;
        }
    }
    Nome[k]='\0';
    k=0;
    
    for(int i=ultimo_espaco+1 ; NomeCompleto[i]!='\0' ; i++){
        Sobrenome[k]=NomeCompleto[i];
        k++;
    }
    Sobrenome[k]='\0';

    printf("%s.%s@unb.br\n",Nome,Sobrenome);

    return 0;
}