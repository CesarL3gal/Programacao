#include <stdio.h>
int main(){
    int numero;
    scanf("%d",&numero);
    int matriz[numero][numero];
    for(int i=0;i<numero;i++){
        for(int j=0; j<numero;j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    int maior_linha=0;
    int maior=0;

    for(int i=0; i<numero; i++){
        int contar=0;
            for(int j=0;j<numero;j++){
                contar+=matriz[j][i];
        }

        if(contar>maior){
            maior=contar;
            maior_linha=i;
        }

    }
    printf("%d",maior_linha+1);
    
    return 0;
}