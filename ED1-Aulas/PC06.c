/* PC6 EDA1 Aula17. ANSI C. Consultas = posicoes examinadas,
   uma por iteracao; nao quantidade de operadores relacionais.
   0<=n<=100. Busca binaria exige ordem nao decrescente.
   consultas aponta para int valido e separado do vetor. */
#include <stdio.h>
#include <stddef.h>
/* Os retornos provisórios compilam, mas NAO resolvem a PC6. */
int buscaLinear(int v[], int n, int x, int *consultas)
{
    /* TODO: percorrer o prefixo e retornar a primeira ocorrencia. */
    (void)v; (void)n; (void)x;
    *consultas = 0;
    return -1;
}
int buscaBinaria(int v[], int n, int x, int *consultas)
{
    /* TODO: usar intervalo inclusivo e retornar ao encontrar o meio. */
    (void)v; (void)n; (void)x;
    *consultas = 0;
    return -1;
}

static int testar(int v[], int n, int x, int il, int ib, int cl, int cb)
{
    int a, b, ca, cbusca, i, antes[100], ok;
    for (i = 0; i < n; i++) antes[i] = v[i];
    ca = 999; cbusca = 999;
    a = buscaLinear(v, n, x, &ca);
    b = buscaBinaria(v, n, x, &cbusca);
    ok = (a == il && b == ib && ca == cl && cbusca == cb);
    for (i = 0; i < n; i++) if (v[i] != antes[i]) ok = 0;
    printf("n=%d x=%d | esperado L=%d/%d B=%d/%d | obtido L=%d/%d B=%d/%d %s\n",
           n, x, il, cl, ib, cb, a, ca, b, cbusca, ok ? "OK" : "FALHOU");
    return ok;
}
int main(void)
{
    int v[7] = {2,5,8,12,16,23,38};
    int um[1] = {7};
    int rep[5] = {1,2,2,2,4};
    int passou, total;
    passou = 0; total = 0;
    passou += testar(NULL,0,7,-1,-1,0,0); total++;
    passou += testar(um,1,7,0,0,1,1); total++;
    passou += testar(um,1,3,-1,-1,1,1); total++;
    passou += testar(v,7,16,4,4,5,3); total++;
    passou += testar(v,7,12,3,3,4,1); total++;
    passou += testar(v,7,7,-1,-1,7,3); total++;
    passou += testar(v,3,12,-1,-1,3,2); total++;
    passou += testar(rep,5,2,1,2,2,1); total++;
    passou += testar(v,7,38,6,6,7,3); total++;
    printf("%d de %d testes passaram.\n", passou, total);
    return passou == total ? 0 : 1;
}
