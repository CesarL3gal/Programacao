#include <stdio.h>
int main(){
    int N, M;
    scanf("%d %d",&N,&M);
    int matriz[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    int soma;
    int menor=2147483647;
    for(int j=0;j<M;j++){
        soma=0;
        for(int i=0;i<N;i++){
            soma+=matriz[i][j];
        }
        if(soma<menor){
            menor=soma;
        }
    }
    printf("%d\n",menor);

    return 0;
}