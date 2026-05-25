#include <stdio.h>
int main(){
    int M, N;
    scanf("%d %d",&M,&N);
    char matriz[M][N];
    for(int i=0;i<M;i++){
        scanf("%s",matriz[i]);
    }
    int visitados[105][105]={0}; //matriz nula, ai vou botar numero aonde já foi
    int x_inicial, y_inicial;
    scanf("%d %d",&x_inicial, &y_inicial);

    visitados[x_inicial][y_inicial] = 1;
    
    //printf("\n\n");
    // for(int i=0; i<M+1; i++){
    //     for(int j=0; j<N; j++){
    //         printf("%c",matriz[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}