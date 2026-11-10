#include <stdio.h>
int soma_digitos(int n){
    int soma = 0;
    if (n < 0)
        n = -n;
    while (n > 0)
    {
        soma += n % 10;
        n /= 10;
    }
    return soma;
}
int maior(int a, int b){
    if (a > b)
        return a;
    return b;
}
int main(void){
    int a, b;
    printf("Teste Interno\nCom a=10 e b=20\n");
    a=10;
    b=20;
    printf("  Maior: %d\n  Soma dos Digitos de A: %d\n  Soma dos Digisto de B: %d\n",maior(a,b),soma_digitos(a),soma_digitos(b));
    printf("Saida Esperada:\n  Maior: 20\n  Soma dos Digitos de A: 1\n  Soma dos Digisto de B: 2\n");
    printf("Digite dois inteiros: ");
    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("Entrada invalida.\n");
        return 1;
    }
    printf("maior = %d\n", maior(a, b));
    printf("soma_digitos(a) = %d\n", soma_digitos(a));
    printf("soma_digitos(b) = %d\n", soma_digitos(b));
    return 0;
}