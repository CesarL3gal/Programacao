#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int matriz[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    int maior=0,maior_linha=0;
    for(int i=0;i<n;i++){
        int conta=0;
        for(int j=0;j<n;j++){
            if(matriz[j][i]==1){
                conta++;
            }

        }

        if(conta>maior){
            maior=conta;
            maior_linha=i;
        }
    }
    printf("%d",maior_linha+1);
    return 0;
}