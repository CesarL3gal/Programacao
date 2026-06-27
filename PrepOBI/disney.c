#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int vetor[26]={};
    char texto[101];
        //2
        //caknjcnakcaa
        //ncvkacas
        //12 23 412 0 0 0 0 0 0 
    int pos;
    for(int i=0;i<n;i++){

        scanf("%s",texto);
        for(int j=0; texto[j]!='\0';j++){
            pos=texto[j]-'a';
            vetor[pos]++;
        }

    }
    int maior=0;
    int indice;

    for(int i=0;i<26;i++){
        if(vetor[i]>maior){
            maior=vetor[i];
            indice=i;
        }
    }
    printf("%d\n",indice);
    printf("%c\n",indice+'a');

    return 0;
}