#include <stdio.h>
void recusiva(char *str){
    if(*str == '\0'){
        return;
    }
    recusiva(str+1);
    printf("%c",*str);
}   
int main(){
    char texto[500];
    scanf("%[^\n]",texto);
    recusiva(texto);  
    return 0;
}   