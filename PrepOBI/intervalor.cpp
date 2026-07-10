#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    vector<int> sequencia(N);
    for (int i = 0; i < N; ++i) {
        cin >> sequencia[i];
    }
    vector<int> ultima_pos(N,-1);
    int esquerda=0;
    int maior_intervalo=0;
    int tamanho=0;
    for(int direita=0;direita<N;direita++){
        int numero_atual=sequencia[direita];
        if(ultima_pos[numero_atual]>=direita){
            esquerda=ultima_pos[numero_atual];
        }
        ultima_pos[numero_atual]=direita;
        tamanho=direita-esquerda+1;
        if(tamanho>maior_intervalo){
            maior_intervalo=tamanho;
        }
    }
    cout<<tamanho<<"\n";
    return 0;

}