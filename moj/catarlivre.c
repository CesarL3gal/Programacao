#include <stdio.h>
int main(){
    int vetor[5];
    for(int i=0;i<5;i++){
        scanf("%d",&vetor[i]);
    }
    int cresce=1;
    int desce=1;
    for(int i=0;i<4;i++){
        if(vetor[i]>vetor[i+1]){
            cresce=0;
        }
        if(vetor[i]<vetor[i+1]){
            desce=0;
        }
    }
    if(cresce==0 && desce==0){
        printf("N\n");
    }
    else if(cresce==1 && desce==0){
        printf("C\n");
    }
    else if(desce==1 && cresce==0){
        printf("D\n");
    }
    return 0;
}