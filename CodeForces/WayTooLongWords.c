#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char texto[105];
    while(n--){
        scanf("%s",texto);
        //char salvar[4];
        int tamanho=0;
        for(int i=0;texto[i]!='\0';i++){
            tamanho++;
        }

        if(tamanho>10){
            for(int i=0;texto[i]!='\0';i++){
                if(i==0){
                    printf("%c",texto[i]);
                }
                if(i==1)
                printf("%d",tamanho-2);
                if(texto[i+1]=='\0'){
                    printf("%c\n",texto[i]);
                }
            }
        }
        else{
            printf("%s\n",texto);
        }
         
    }
}