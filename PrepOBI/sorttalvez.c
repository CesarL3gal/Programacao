#include <stdio.h>
void sort(int vetor[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(vetor[j]>vetor[j+1]){
                int aux=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=aux;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ", vetor[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int vetor[n];
    for(int i=0;i<n ;i++){
        scanf("%d",&vetor[i]);
    }
    int size=sizeof(vetor)/sizeof(vetor[0]);
    ///printf("%d\n",size);
    sort(vetor,size);
   
    return 0;
}