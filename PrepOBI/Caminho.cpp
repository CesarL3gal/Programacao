    #include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    if (!(cin >> N)) return 0;

    vector<int> P(N);
    for (int i = 0; i < N; ++i) {
        cin >> P[i];
    }

    vector<bool> escuro(N);
    int total_escuros = 0;

    for (int i = 0; i < N; ++i) {
        int proximo = (i + 1) % N;
        if (P[i] + P[proximo] < 1000) {
            escuro[i] = true;
            total_escuros++;
        } else {
            escuro[i] = false;
        }
    }
    if (total_escuros == N) {
        cout << N << "\n";
        return 0;
    }
    int max_consecutivo = 0;
    int atual_consecutivo = 0;

    for (int i = 0; i < 2 * N; ++i) {
        if (escuro[i % N]) {
            atual_consecutivo++;
            if (atual_consecutivo > max_consecutivo) {
                max_consecutivo = atual_consecutivo;
            }
        } else {
            atual_consecutivo = 0;
        }
    }

    cout << max_consecutivo << "\n";

    return 0;
}