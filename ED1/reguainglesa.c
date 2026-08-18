#include <stdio.h>
/*
3
.-
.--
.-
.---
.-
.--
.-
*/
void regua_inglesa(int n){
    if(n==0){
        return;
    }
    regua_inglesa(n - 1);

    printf(".");
    for(int i=0;i<n;i++){
        printf("-");
    }
    printf("\n");

    regua_inglesa(n - 1);
}
/*👆
se for 3-> vai fazer o 2 em cima, onde o 2 vai fazer o 1 em cima e em baixo. 
Depois vão fazer o 3 e repetir o 2 em baixo*/
int main(){
    int n;
    scanf("%d",&n);
    regua_inglesa(n);
    return 0;
}