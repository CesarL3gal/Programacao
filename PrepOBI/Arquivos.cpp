#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N,B;
    cin>>N>>B;
    vector<long long> arquivos(N);
    for(int i=0;i<N;i++){
        cin>>arquivos[i];
    }
    sort(arquivos.begin(),arquivos.end());
    long long esquerda=0;
    long long direita=N-1;
    long long pastas=0;
    while(esquerda<=direita){
        if(esquerda==direita){
            pastas++;
            break;
        }
        if(arquivos[esquerda]+arquivos[direita]<=B){
            pastas++;
            esquerda++;
            direita--;
        }
        else{
            pastas++;
            direita--;
        }
        
    }
    cout<<pastas<<'\n';
    return 0;
}