#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int matriz[n][m]={};
    char Letra;
    int numero;
    while(scanf(" %c%d", &Letra, &numero)!=EOF){
        matriz[Letra-'A'][numero-1]=1;
    }
    printf(" ");
    for(int i=0;i<m;i++){
        printf(" %02d",i+1);
    }
    printf("\n");

    for(int i=n-1;0<=i;i--){
        printf("%c",i+'A');
        for(int j=0;j<m;j++){
            if(matriz[i][j]){
                printf(" XX");
            }
            else{
                printf(" --");
            }
            
        }
        printf("\n");
    }

    return 0;
}