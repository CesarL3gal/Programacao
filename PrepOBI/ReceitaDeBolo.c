#include <stdio.h>
int main(){
    int A,B,C;
    //2,3,5 ->1 bolo
    scanf("%d %d %d",&A,&B,&C);
    int i=0;
    while(A>1 && B>2 && C>4){
        A=A-2;
        B=B-3;
        C=C-5;
        i++;
    }
    printf("%d\n",i);
    return 0;
}