#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    cin>>M>>N;
    vector<vector<int>> estoque(M, vector<int>(N));
    for(int i=0; i<M ;i++){
        for(int j=0; j<N ;j++){
            cin>>estoque[i][j];
        }
    }

    int P;
    cin>>P;
    int vendas=0;
    
    for(int k=0;k<P;k++){
        int I,J;
        cin>>I>>J;
        if(estoque[I-1][J-1]>0){
            estoque[I-1][J-1]--;
            vendas++;
        }
    }
    cout<<vendas<<'\n';

    return 0;
}