#include <stdio.h>  
int recursao(char *str){
    int par=0;
    if(str[0]=='\0' || str[1]=='\0' || str[2]=='\0'){
        return 0;
    }
    if(str[0]==str[2]){
        par=1;
    }
    else{
        par=0;
    }
    return par+recursao(str+1);
}


int main(){
    char texto[201];
    scanf("%s",texto);
    int soma=recursao(texto);
    printf("%d",soma);
    return 0;
}