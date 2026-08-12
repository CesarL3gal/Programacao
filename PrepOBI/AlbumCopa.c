#include <stdio.h>

int main() {
    int n, m;
    
    scanf("%d", &n); //total do album
    scanf("%d", &m); //total de figurinhas compramos

    int x[m]; // coleta as figurinhas

    for(int i = 0; i < m; i++){
        scanf("%d", &x[i]);//numero(no album) de cada figurinha que compramos
    }

    // a posicao do vetor indica o numero
    int f[n+1]={}; //frequencia de cada figurinha

    //percorre x e soma na pos
    for(int i = 0; i < m; i++){
        f[x[i]]++;
    }

    // for(int i=0;i<n;i++){
    //     printf("%d ",f[i]);
    // }
    // printf("\n");

    int s = 0;
    for(int i=1;i<n+1;i++){
        if(f[i]>=1){
            s++;
        }
    }
    printf("%d",n-s);
    
    return 0;
}