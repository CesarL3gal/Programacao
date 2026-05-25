#include <stdio.h>
int main(){
    int L=0,H=0;
    scanf("%d %d",&L,&H);
    int FL1,FH1,FL2,FH2;
    scanf("%d %d",&FL1,&FH1);
    scanf("%d %d",&FL2,&FH2);
    
    if( (FL2+FL1)<=L && FH2<=H &&  FH1<=H){
        printf("S\n");
    }
    else if((FL2+FH1)<=L && FH2<=H &&  FL1<=H){
        printf("S\n");
    }
    else if((FH2+FL1)<=L && FL2<=H &&  FH1<=H){
        printf("S\n");
    }
    else if((FH2+FH1)<=L && FL2<=H &&  FL1<=H){
        printf("S\n");
    }
    else if( (FL2+FL1)<=H && FH2<=L &&  FH1<=L){
        printf("S\n");
    }
    else if((FL2+FH1)<=H && FH2<=L &&  FL1<=L){
        printf("S\n");
    }
    else if((FH2+FL1)<=H&& FL2<=L &&  FH1<=L){
        printf("S\n");
    }
    else if((FH2+FH1)<=H && FL2<=L &&  FL1<=L){
        printf("S\n");
    }
    else{
        printf("N\n");
    }
    
    
    return 0;
}