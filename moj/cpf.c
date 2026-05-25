#include <stdio.h>

int main() {
    unsigned long cpf;
    int a,b,c,d,e,f,g,h,i,j,k,S,R,n1,n2;

    scanf("%lu", &cpf);

    a = cpf / 10000000000;
    b = (cpf / 1000000000) % 10;
    c = (cpf / 100000000) % 10;
    d = (cpf / 10000000) % 10;
    e = (cpf / 1000000) % 10;
    f = (cpf / 100000) % 10;
    g = (cpf / 10000) % 10;
    h = (cpf / 1000) % 10;
    i = (cpf / 100) % 10;
    j = (cpf / 10) % 10;
    k = cpf % 10;

    // verificar iguais
    /*if (a==b && a==c && a==d && a==e && a==f && a==g && a==h && a==i && a==j && a==k) {
        printf("invalido\n");
        return 0;
    }*/

    S = a*10 + b*9 + c*8 + d*7 + e*6 + f*5 + g*4 + h*3 + i*2;
    R = S % 11;

    if (R < 2) n1 = 0;
    else n1 = 11 - R; 

    S = a*11 + b*10 + c*9 + d*8 + e*7 + f*6 + g*5 + h*4 + i*3 + n1*2;
    R = S % 11;

    if (R < 2) n2 = 0;
    else n2 = 11 - R;

    if (n1 == j && n2 == k)
        printf("valido\n");
    else
        printf("invalido\n");

    return 0;
}