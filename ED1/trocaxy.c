#include <stdio.h>

void recursiva(char *str){
    if(*str=='\0'){
        return;
    }
    if(*str=='x'){
        printf("y");
    }
    else{
        printf("%c",*str);
    }
    recursiva(str+1);
}

int main(){
    char texto[82];
    scanf("%s",texto);
    recursiva(texto);
    return 0;
}