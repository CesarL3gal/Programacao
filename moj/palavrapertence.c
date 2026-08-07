#include <stdio.h>
int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    char caderno1[A][80], caderno2[B][80];
    for(int i=0;i<A;i++){
        scanf("%s", caderno1[i]);
    }
    for(int i=0;i<B;i++){
        scanf("%s", caderno2[i]);
    }
    for(int i=0;i<A;i++){
        for(int k=0;k<B;k++){
            int igual=1;
            int j=0;
            while(1){
                if (caderno1[i][j]!=caderno2[k][j]){
                    igual=0;
                    break;
                }
                if(caderno1[i][j]=='\0'){
                    break;
                }
                j++;
            }
            if(igual){
                printf("1\n");
                return 0;
            }
            }
        }
        printf("0\n");
        return 0;
    }