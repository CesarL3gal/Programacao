#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int matriz[N][N];
    vector<int> somaV(N,0);
    vector<int> somaH(N,0);

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
           cin>>matriz[i][j];
           somaH[i]+=matriz[i][j];
           somaV[j]+=matriz[i][j];
        }
    }

    // for(int i=0;i<N;i++){
    //     for(int j=0;j<N;j++){
    //        cout<<matriz[i][j]<<' ';
    //     }
    //     cout<<'\n';
    // }

    // for(int i=0;i<N;i++){
    //     cout<<somaV[i]<<' ';
    // }
    // cout<<'\n';
    // for(int i=0;i<N;i++){
    //     cout<<somaH[i]<<' ';
    // }
    // cout<<'\n';
    int maior=0;
    int posicao;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            posicao = somaH[i] + somaV[j] - (2*matriz[i][j]);
            if(posicao>maior){
                maior=posicao;
            }
        }
    }
    cout<<maior<<'\n';
return 0;
}