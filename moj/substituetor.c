#include <stdio.h>
#include <stdbool.h>
bool e_letra(char c){
    return ((c>='A' && c<='Z' ) || (c>='a' && c<='z'));
}

int main(){
    char texto[10005];
    scanf("%[^\n]",texto);
    char palavra_og[41] , palavra_subs[41];
    scanf("%s",palavra_og);
    scanf("%s",palavra_subs);

    char copia[10005][41];
    int n=0,j=0;
    //faz a copia em diferentes linhas
    for(int i=0;texto[i]!='\0';i++){
        if(e_letra(texto[i])){
            copia[n][j]=texto[i];
            j++;
        }
        else{
            if(j>0){
                copia[n][j]='\0';
                n++;
                j=0;
            }
            copia[n][j]=texto[i];
            j++;
            copia[n][j]='\0';
            n++;
            j=0;
        }

    }
    if(j>0){
        copia[n][j]='\0';
        n++;
    }
    int N_palavras=n;

    for(n=0;n<N_palavras;n++){

        bool mesma=true;

        for(int i=0;copia[n][i]!='\0' || palavra_og[i]!='\0' ;i++){
            if(palavra_og[i]!=copia[n][i]){
                mesma=false;
                break;
            }
        }

        if(mesma){
            int i;
            for(i=0;palavra_subs[i]!='\0' ;i++){
                copia[n][i]=palavra_subs[i];
            }
            copia[n][i]='\0';
        }
    }
    
    for(n=0; n<N_palavras; n++){
        int i=0;
        for(i=0;copia[n][i]!='\0';i++){
            printf("%c",copia[n][i]);
        }
    }
    return 0;
}