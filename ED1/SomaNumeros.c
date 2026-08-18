#include <stdio.h>
int recusiva(){
    int atual = getchar();
    if(atual=='\n'){
        return 0;
    }
    if(atual>='0' && atual<='9'){
        int soma=(atual-'0') + recusiva();
        return soma;
    }
    recusiva();
}   

int main(){
    int n;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
        long long int soma = recusiva();
        printf("%lld\n",soma);
    }
    return 0;
}
