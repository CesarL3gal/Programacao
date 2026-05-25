#include <stdio.h>
struct aluno{
    char nome[80];
    int nota;
};
struct aluno preencherAluno(char texto[240]){
    struct aluno teste;
    char notas[240];
    int contador=0,contador2=0;
    int passou=0;
    
    for(int i=0;texto[i]!='\0';i++){
        if(texto[i]==','){
            passou=1;
            i++;
        }
        if(passou==0){
            notas[contador++]=texto[i];
        }
        notas[contador]='\0';
        if(passou){
            teste.nome[contador2++]=texto[i];
        }
    }
    teste.nome[contador2]='\0';
    printf("%s\n",teste.nome);

    int cont=-1;
    for(int i=0;notas[i]!='\0';i++){
        cont++;
    }
    //printf("%s\n",notas);
    int i=cont;
    int j=0;
    int nota=0;
    for(i=cont;i>=0;i--){
        int tamanho=1;
        for(int j=i;j>0;j--){
            tamanho*=10;
        }
        nota = nota + (notas[j]-'0')*tamanho;
        j++;
    }
    printf("%d\n",nota);
    teste.nota=nota;

return teste;
}
int main(){
    preencherAluno("75,Cesar Augusto");
    return 0;
}