#include <stdio.h>
int main(){
    // 5
    // 1 2 3 4 5
    // 4
    int lt;
    scanf("%d",&lt);
    int legos[lt];
    for(int i=0; i<lt;i++){
        scanf("%d",&legos[i]);
    }
    int comp;
    scanf("%d",&comp);
    int achou=0;
    for(int i=0; i<lt; i++){
        if(legos[i]==comp){
            achou=1;
            break;
        }
    }
    if(achou==1){
        printf("achou\n");
    }
    else{
        printf("nao achou\n");
    }

    return 0;
}