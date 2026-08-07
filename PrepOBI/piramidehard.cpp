#include <iostream>
using namespace std;
int main(){
    int N;
    scanf("%d",&N);
    int matriz[N][N]={};
    int maximo = N/2;
    if((maximo%2)!=0){
        maximo++;
    }
    /*
    00 01 02 03
    10 11 12 13
    20 21 22  23
    30 31 32 33
    */
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){

            int dist_cima = i+1;
            int dist_baixo = N-i;
            int dist_esq=j+1;
            int dist_dir = N-j;
             
            int valor = min( min(dist_cima,dist_baixo), min(dist_esq,dist_dir) );
            matriz[i][j]=valor;
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d ",matriz[i][j]);       
        }  
        printf("\n");
    }
}