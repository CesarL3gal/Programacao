#include <stdio.h>
#include <string.h>
#include <stdbool.h>
struct tipoMusica{
    char nome[80];
    int ano;
};
struct tipoBanda{
    char nome[80];
    int qtd;
    struct tipoMusica musicas[100];
};
void pesquisarNomeMusica(char pesquisa[80], struct tipoBanda v[50], int qtd){
    bool encontrou=false;
    for(int i=0;i<qtd;i++){
        for(int j=0;j<v[i].qtd;j++){

            if(strcmp(v[i].musicas[j].nome,pesquisa)==0){
                printf("%s : ano %d\n",v[i].nome,v[i].musicas[j].ano);
                encontrou=true;
            }
        }
    }
    if(!encontrou){
        printf("Musica nao cadastrada\n");
    }

}
