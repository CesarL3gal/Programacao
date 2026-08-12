#include <stdio.h>
void recusiva(char *str){
    if(*str == '\0'){
        return;
    }
    if(*str == 'x'){
        recusiva(str+1);
        printf("%c",*str);
    }
    else{
        printf("%c",*str);
        recusiva(str+1);
    }
    
}   
int main(){
    char texto[500];
    scanf("%[^\n]",texto);
    recusiva(texto);  
    return 0;
}   