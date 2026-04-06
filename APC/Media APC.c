#include <stdio.h>
int main(){
    float P1=0 ,P2=0 ,P3=0;
    float Trabalho=0;
    float L1=0 ,L2=0 ,L3=0 ,L4=0, L5=0;

    scanf("%f %f %f", &P1, &P2, &P3);
    scanf(" %f", &Trabalho);
    scanf("%f %f %f %f %f", &L1, &L2, &L3, &L4, &L5);

    float Media = (P1+2*P2+3*P3+2*Trabalho)/8;
    float MediaLista = (L1+L2+L3+L4+L5)/10;
    float Media_Final = Media + MediaLista;
    printf("%.2f", Media_Final);

    return 0;
}