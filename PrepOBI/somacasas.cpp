    #include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> casas(N);
    for (int i = 0; i < N; ++i) {
        cin >> casas[i];
    }

    int K;
    cin >> K;

    int esquerda = 0;
    int direita = N - 1;

    while (esquerda < direita) {
        int soma = casas[esquerda] + casas[direita];

        if (soma == K) {
            cout << casas[esquerda] << " " << casas[direita] << "\n";
            break;
        } 
        else if (soma < K) {
            esquerda++;
        } 
        else {
            direita--;
        }
    }

    return 0;
}