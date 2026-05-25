//E8
#include <stdio.h>

struct tipoLogradouro{
char tipo[80];
char nome[80];
char complemento[80];
};

void criaLinhaCSV(struct tipoLogradouro info, char linha[240]){
    int i=0;
    int contador=0;
    for(i=0;info.tipo[i]!='\0';i++){
        linha[contador]=info.tipo[i];
        contador++;
    }
    linha[contador]=';';
    contador++;

    for(i=0;info.nome[i]!='\0';i++){
        linha[contador]=info.nome[i];
        contador++;
    }
    linha[contador]=';';
    contador++;

    for(i=0;info.complemento[i]!='\0';i++){
        linha[contador]=info.complemento[i];
        contador++;
    }
    linha[contador]='\0';
    return linha;
}   