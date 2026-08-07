#include <stdio.h>
int main(){
    int P,Q,R;
    scanf("%d %d %d", &P, &Q, &R);
    if(P==0){
        if(R==0){
            printf("MI\n");
        }
        else{
            printf("MM\n");
        }
    }
    else{
        if(Q==0){
            printf("MS\n");
        }
        else{
            printf("SS\n");
        }
    }
    return 0;
}