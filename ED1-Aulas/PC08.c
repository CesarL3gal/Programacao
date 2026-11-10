/* EDA1 Aula 21 - PC8: listas encadeadas II
 * Complete as quatro operacoes indicadas. Compilacao: cc -std=c90 -Wall -Wextra -pedantic
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *prox;
} No;

void imprimir(const No *inicio)
{
    (void)inicio;
    /* TODO: percorra a lista e mostre os valores. */
}

No *buscar(No *inicio, int valor)
{
    (void)valor;
    /* TODO: devolva o primeiro no com esse valor ou NULL. */
    return inicio;
}

No *inserirFim(No *inicio, int valor)
{
    (void)valor;
    /* TODO: aloque e ligue um no no fim; trate lista vazia e falha de malloc. */
    return inicio;
}

No *removerPrimeiro(No *inicio, int valor)
{
    (void)valor;
    /* TODO: remova e libere a primeira ocorrencia; trate cabeca e ausencia. */
    return inicio;
}

void liberarLista(No *inicio)
{
    No *proximo;
    while (inicio != NULL) {
        proximo = inicio->prox;
        free(inicio);
        inicio = proximo;
    }
}

int main(void)
{
    No *inicio;
    No *resultado;
    inicio = NULL;
    inicio = inserirFim(inicio, 12);
    inicio = inserirFim(inicio, 7);
    inicio = inserirFim(inicio, 19);
    imprimir(inicio);
    resultado = buscar(inicio, 7);
    if (resultado != NULL) printf("Encontrado: %d\n", resultado->valor);
    inicio = removerPrimeiro(inicio, 12);
    imprimir(inicio);
    liberarLista(inicio);
    return 0;
}
