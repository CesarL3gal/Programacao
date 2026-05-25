#include <stdio.h>
int main(){
    int G,P;
    scanf("%d",&G);
    scanf("%d",&P);
    int amigos = (G*8)+(P*4) - 2;
    printf("%d",amigos);
    return 0;
}