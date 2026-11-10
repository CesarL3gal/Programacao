#include <stdio.h>
int recursiva(char *str){
    //*str acessa o conteudo e str acessa o vetor
    if(*str=='\0'){
        return 0;
    }  
    if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' ){
        return 1 + recursiva(str+1);
    }
    return recursiva(str+1);
}

int main(){
    char texto[101];
    fgets(texto,101,stdin);
    int soma = recursiva(texto);

    printf("%d",soma);
    return 0;   
}