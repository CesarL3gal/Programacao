#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin>>N;

    vector<vector<int>> tabuleiro(N, vector<int>(N));
    vector<int> somaI(N,0);
    vector<int> somaJ(N,0);
    
    for(int i=0; i<N ;i++){
        for(int j=0; j<N ;j++){
            cin>>tabuleiro[i][j];
            somaJ[j]+=tabuleiro[i][j];
            somaI[i]+=tabuleiro[i][j];
        }
    }
    //são um vetor contendo as somas de J e outro com as somas de I

    int maior=0;
    int soma;
    for(int i=0; i<N ;i++){
        for(int j=0; j<N ;j++){
            soma=somaI[i]+somaJ[j]-(2*tabuleiro[i][j]);
            if(soma>maior){
                maior=soma; //retirar duas vezes, pq somei duas vezes o tabuleiro[i][j]
            }
        }
    }
    cout<<maior<<'\n';
    return 0;
}