#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> linha(N);
    for(int i=0 ; i<N ; i++){
        cin>>linha[i];
    }   
    //aparentemente a função max elemente devolver um ponteiro, ponteiro D:
    int M = *max_element(linha.begin(),linha.end());
    vector<vector<int>> matriz(M, vector<int>(N,0)); //matriz N
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){  //inverter na hora de imprimir
            if(linha[j]>0){
                matriz[i][j]++;
                linha[j]--;
            }
        }
    }

    for(int i=M-1; i>=0 ; i--){
        for(int j=0 ; j<N ; j++){  
            if(j<N-1){
            cout<<matriz[i][j]<<" ";
            }
            else{
            cout<<matriz[i][j];
            }
        }
        cout<<'\n';
    }
    return 0;
}