#include <bits/stdc++.h>
using namespace std;

int N, M;

// (i + 1, j) (i - 1, j) (i, j + 1) (i, j - 1) 
vector<pair<int, int>> dirs = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };

bool check(int i, int j) {
    return i >= 0 && i < N && j >= 0 && j < M;
}
int main() {
    /*
    O que é uma matriz?
    - um vetor de vetores?

    Como declarar uma matriz?

        int vetor[5];    Array (Linguagem C)
        vector<int> vetor(5);    Vector (C++)

        int matriz[5][4];

                1 2 3 4 
                5 6 7 8
                9 6 4 5
                7 7 7 7
                9 6 4 5

        vector<vector<int>> matriz(5, vector<int>(4));

    Como acessar um elemento?

        Para vetores:
            int vetor[5];
            vetor[0] = 10;
        
        Para matrizes:
        matriz[0] - a primeira linha da matriz
        matriz[0][1] - acessando o segundo elemento da primeira linha
        (i, j) ou matriz[i][j] - i (linhas) e (j) colunas


    Cuidado!
    - Seu computador não tem memória infinita.

    Se N, M forem muito grandes, você não vai conseguir declarar uma matriz.

    N, M >= 10^5 (100000) 10^5 * 10^5

    Geralmente: N, M 
    100, 1000, 10000
    N * M <= 10^5..

    
    Como realizar a leitura de uma matriz?

    Para vetores:
        int vetor[5];
        for (int i = 0; i < 5; i++) 
                cin >> vetor[i];
    
    Para matrizes:

                1 2 3 4 
                5 6 7 8
                9 6 4 5
                7 7 7 7
                9 6 4 5


            int matriz[3][3];
            int soma = 0;

            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cin >> matriz[i][j];
                    soma += matriz[i][j];
                }
            }

            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << matriz[i][j] << ' ';
                }
                cout << '\n';
            }

            cout << "soma = " << soma << '\n';


    Problemas de matrizes geralmente estão associados 
    com problemas de grafos.

    Problema Motivador

    Você recebe uma matriz de dimensões N, M. A matriz contém: #.o
    Para cada o, conte quantos . são adjacentes. 

    Adjacente considerando (i + 1, j) (i - 1, j) (i, j + 1) (i, j - 1) 
    Baixo, Cima, Direita, Esquerda
    Diagonais   (i + 1, j + 1) ...

    N, M <= 100

    N = 4  M = 4
    
    #o.#
    ...o
    .o..
    #o##

    */

    cin >> N >> M;

    char matriz[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (matriz[i][j] == 'o') {
                int cont = 0;
                for (auto [di, dj] : dirs) {
                    if (check(i + di, j + dj) and matriz[i + di][j + dj] == '.') {
                        cont++;
                    }
                }
                cout << cont << '\n';
                // if (i + 1 < N and matriz[i + 1][j] == '.') cont++;
                // if (i - 1 >= 0 and matriz[i - 1][j] == '.') cont++;
                // if (j + 1 < M and matriz[i][j + 1] == '.') cont++;
                // if (j - 1 >= 0 and matriz[i][j - 1] == '.') cont++;
            }
        }
    }
}
 