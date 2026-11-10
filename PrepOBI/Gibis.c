#include <stdio.h>
void sort(int n, int vetor[n]){
    for(int i=0 ;i<n;i++){
        for(int j=i;j<n;j++){
            if(vetor[i]>vetor[j]){
                int temp = vetor[i];
                vetor[i]=vetor[j];
                vetor[j]=temp;
            }
        }
    }
}
int main(){
    int N,R;
    scanf("%d %d",&N,&R);
    int vetor[N];
    for(int i=0;i<N;i++){
        scanf("%d",&vetor[i]);
    }           
    sort(N,vetor);
    
    if(vetor[0]>R){
        printf("0\n");
        return 0;
    }
    int soma=0;
    for(int i=1;i<=N && soma<=R;i++){
        soma+=vetor[i];
        if(soma>=R){
            printf("%d",i);
            return 0;
        }   
    }
    printf("\n");
    return 0;
}