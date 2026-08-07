#include <stdio.h>
int main(){
    int N,D;
    scanf("%d",&N);
    int T[N];
    for(int i=0;i<N;i++){
        scanf("%d",&T[i]);  
    }
    scanf("%d",&D);
    int soma=0;
    for(int i=1;i<N;i++){
        if((T[i]-T[i-1])<D){ //reseta o tempo
            soma += (T[i]-T[i-1]);
        }
        else{
            soma += D;
        }
    }
    soma += D;
    printf("%d\n",soma);
    return 0;
}