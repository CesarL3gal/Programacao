#include <stdio.h>
int i=0;
int somavoga(char texto[100],int soma){
    if(texto[i]!='\0'){
    i++;
    soma=somavoga(texto,soma);
    }
    if(texto[i]=='A' || texto[i]=='O' || texto[i]=='I' || texto[i]=='E' || texto[i]=='U' ){
        soma++;
    }
    i--;
    return soma;
}
int main(){
    char texto[100];
    fgets(texto,100,stdin);
    //printf("%s",texto);
    int soma=0;
    soma=somavoga(texto,soma);
    printf("%d",soma);
    return 0;
}