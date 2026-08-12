#include <stdio.h>
int main(){
    int n;
    int soma=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        int s;
        scanf("%d",&s);
        soma+=s;
    }
    //printf("%d",soma);
    int resposta;
    scanf("%d",&resposta);
    if(resposta!=soma){
        printf("Errou\n");
    }
    else{
        printf("Acertou\n");
    }
    return 0;
}