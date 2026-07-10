#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    if (!(cin >> N >> K)) return 0;

    vector<int> X(N);
    for (int i = 0; i < N; ++i) {
        cin >> X[i];
    }

    sort(X.begin(), X.end());

    int M = N - K;
    
    int menor_distancia = 2000000000; 

    for (int i = 0; i <= N - M; ++i) {
        int distancia_atual = X[i + M - 1] - X[i];
    
        if (distancia_atual < menor_distancia) {
            menor_distancia = distancia_atual;
        }
    }

    cout << menor_distancia << "\n";

    return 0;
}