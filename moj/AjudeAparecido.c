#include <stdio.h>
int main(){
    int A,B,C;
    int res;
    scanf("%d %d %d", &A, &B, &C);
    scanf("%d",&res);
    if((A+B+C)==res){
        printf("Acertou\n");
    }
    else{
        printf("Errou\n");
    }
    return 0;
}