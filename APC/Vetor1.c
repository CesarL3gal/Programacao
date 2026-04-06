#include <stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    int vetor[n];

    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }
    int m1=1000000 ;
    int m2=1000000 ;
    int m3=1000000 ;
    
    for(int i=0;i<n;i++){

        if(vetor[i]<m1){
            m3=m2;
            m2=m1;
            m1=vetor[i];
        }

        else if(vetor[i]<m2){
            m3=m2;
            m2=vetor[i];
        }

        else if(vetor[i]<m3){
            m3=vetor[i];
        }
    }

    printf("%d\n",m2);
    printf("%d",m3);
    return 0;
    // 10 5 8 -100 13
}
