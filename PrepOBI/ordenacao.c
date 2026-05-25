#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int vetor[N];
    for(int i=0; i<N ; i++){
        scanf("%d", &vetor[i]);
    }
    int auxiliar;
     for(int i=0; i<N-1;i++){
         for(int j=0;j<N-i-1;j++){ 
             if(vetor[j]>vetor[j+1]){ 
                 auxiliar = vetor[j];
                 vetor[j]=vetor[j+1];
                 vetor[j+1]=auxiliar;
             }
         }
    }

    for(int i=0;i<N;i++){
        if(i==0){
        printf("%d", vetor[i]);
        }
        else{
        printf(" %d", vetor[i]);
        }
    }
    
    return 0;
}