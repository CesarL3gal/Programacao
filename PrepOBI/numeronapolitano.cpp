#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Converte a letra para um índice de "nível de grandeza" (0 a 6)
int indice(char c) {
    switch(c) {
        case 'I': return 0;
        case 'V': return 1;
        case 'X': return 2;
        case 'L': return 3;
        case 'C': return 4;
        case 'D': return 5;
        case 'M': return 6;
    }
    return 0;
}

// Converte a letra para o seu valor real original
long long valor(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return 0;
}

int main() {
    string S;
    if (!(cin >> S)) return 0;
    int n = S.length();
    vector<long long> mod_val(n);
    vector<int> nge(n, -1); 
    vector<int> nearest(7, -1);

    for (int i = n - 1; i >= 0; i--) {
        mod_val[i] = valor(S[i]); 
        int idx = indice(S[i]);

        int min_nge_idx = -1;
    
        for (int k = idx + 1; k < 7; k++) {
            if (nearest[k] != -1) {
                if (min_nge_idx == -1 || nearest[k] < min_nge_idx) {
                    min_nge_idx = nearest[k];
                }
            }
        }
        
        nge[i] = min_nge_idx; 
        nearest[idx] = i;     
    }

    long long resultado = 0;
    for (int i = 0; i < n; i++) {
        if (nge[i] != -1) {
            mod_val[nge[i]] -= mod_val[i];
        } else {
            resultado += mod_val[i];
        }
    }

    cout << resultado << "\n";

    return 0;
}