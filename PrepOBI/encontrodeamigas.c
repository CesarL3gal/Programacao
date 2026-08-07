#include <stdio.h>
int main(){
    int A1,A2;
    int B1,B2;
    int C1,C2;
    scanf("%d",&A1);
    scanf("%d",&A2);
    scanf("%d",&B1);
    scanf("%d",&B2);
    scanf("%d",&C1);
    scanf("%d",&C2);
    int datas[35]={};
    for(int i=A1-1;i<A2;i++){
        datas[i]++;
    }
    for(int i=B1-1; i<B2 ;i++){
        datas[i]++;
    }
    for(int i=C1-1;i<C2;i++){
        datas[i]++;
    }
    int datas_possiveis=0;
    for(int i=0; i<31 ; i++){
        if(datas[i]==3){
            datas_possiveis++;
        }
    }
    printf("%d",datas_possiveis);
    return 0;
}