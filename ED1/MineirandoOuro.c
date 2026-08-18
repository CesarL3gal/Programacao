#include <stdio.h>
int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
    return b;
}
int main(){
    int n;
    scanf("%d",&n);
    int matriz[n][n];
    //soma das opções possiveis
    int maximo[n][n];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d",&matriz[i][j]);
        }   
    }

    for(int j=n-1 ; j>=0 ; j--){
        for(int i=0 ; i<n ; i++){
            if(j==n-1){
                maximo[i][j]=matriz[i][j];
            }
            else{
                int melhor=0;
                if(i>0){
                    melhor = max(melhor, maximo[i-1][j+1]);
                }
                melhor = max(melhor, maximo[i][j+1]);
                if(i<n-1){
                    melhor = max(melhor, maximo[i+1][j+1]);
                }
                maximo[i][j]=matriz[i][j]+melhor;;
            }
        }
    }
    printf("\n");
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            printf("%d ",maximo[i][j]);
        }   
        printf("\n");
    }
   int ouro_maximo=maximo[0][0];
   for(int i=1;i<n;i++){
        if(maximo[i][0]>ouro_maximo){
            ouro_maximo=maximo[i][0];
        }
   }
   printf("%d",ouro_maximo);
    return 0;
}