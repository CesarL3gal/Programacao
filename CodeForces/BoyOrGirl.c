#include <stdio.h>
int main(){
    int palavras[28]={};
    char texto[102];
    scanf("%s",texto);

    for(int i=0;texto[i]!='\0';i++){
        palavras[texto[i]-'a']++;
    }
    
    int soma=0;
    for(int i=0;i<28;i++){
       // printf("%d",palavras[i]);
        if(palavras[i]!=0){
            soma++;
        }
    }

    if(soma%2==1){
        printf("IGNORE HIM!\n");
    }
    else{
        printf("CHAT WITH HER!\n");
    }

    return 0;
}