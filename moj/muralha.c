#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int vetor[n];
    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }
    int segura=1;
    int descer=0;
    int subir=1;
    // int pico;
    int picopos=0;
    for(int i=1;i<n-1;i++){
        if(vetor[i+1]<vetor[i] && !descer && vetor[i]>vetor[i-1] && subir){
            //pico = vetor[i];
            picopos=i;
            descer=1;
            subir=0;
         //  printf("%d\n",pico);
         //printf("%d\n",picopos);
        }
    }
    for(int i=0;i<picopos;i++){
        if(vetor[i+1]<=vetor[i]){
           // printf(" antes %d\n",vetor[i]);
            segura=0;
            break;
        }
    }
    for(int i=picopos+1;i<n-1;i++){
        if(vetor[i+1]>=vetor[i]){
            //printf("depois %d\n",vetor[i]);
            segura=0;
            break;
        }
    }
    if (!descer || picopos==0 || picopos==n-1 || subir){
        segura=0;
    }
    if(segura){
        printf("Muralha segura!\n");
    }
    else {
        printf("Algo errado na muralha...\n");
    }
    return 0;
}