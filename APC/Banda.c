//D8
#include <stdio.h>
struct tipoMusica{
    char nome[80];
    int ano;
    
};

struct tipoBanda{
    struct tipoMusica musicas[100];
    char nome[80];
    int qtd;
};

void pesquisarNomeMusica(char pesquisa [80] , struct tipoBanda bandas[50] , int n){
    int encontradas=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<bandas[i].qtd;j++){
            int iguais=1;
            //comparador
            int k=0;
            while(pesquisa[k] != '\0' && bandas[i].musicas[j].nome[k] != '\0'){
                if(pesquisa[k] != bandas[i].musicas[j].nome[k]){
                    iguais=0;
                    break;
                }
                k++;
            }
            //se são iguais
            if(iguais){
                printf("%s : ano %d\n",bandas[i].nome, bandas[i].musicas[j].ano);
                encontradas = 1;
            }
        }
    }
    if(encontradas==0){
        printf("Musica nao cadastrada\n");
    }
    
}