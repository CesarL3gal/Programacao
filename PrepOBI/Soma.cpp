#include <bits/stdc++.h>
using namespace std;

int main() {
long long N, K;
    cin >> N >> K;
    map<long long, long long> frequencia;

    frequencia[0] = 1;
    long long soma_atual = 0;
    long long total_retangulos = 0;

    for (int i = 0; i < N; i++) {
        long long numero;
        cin >> numero;
        soma_atual += numero;
        long long alvo_passado = soma_atual - K;
    
        if (frequencia.count(alvo_passado)) {
            total_retangulos += frequencia[alvo_passado];
        }
        frequencia[soma_atual]++;
    }

    cout << total_retangulos << "\n";

    return 0;

}
