#include <stdio.h>


int recusiva(char *str, int total){
    if(*str == '\0'){
        return total;
    }
    total = total + (*str-'0');
    recusiva(str+1, total);
    return total;
}   
int main(){
    char texto[500];
    scanf("%[^\n]",texto);
    int soma = recusiva(texto , 0);
    printf("%d",soma);  
    return 0;
}   
