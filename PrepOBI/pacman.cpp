#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<string> tabuleiro(N);
    for(int i=0;i<N;i++){
        cin>>tabuleiro[i];
    }
    int comida_atual=0;
    int comida_max=0;
//por algum motivo esse pacman segue da esquerda pra direita e depois direita pra esquerda
    for(int i=0;i<N;i++){
        if(i%2==0){ //le da esquerda pra direira, pq é par
            for(int j=0;j<N;j++){
                if(tabuleiro[i][j]=='o'){
                    comida_atual++;
                    comida_max=max(comida_atual,comida_max);
                }
                else if(tabuleiro[i][j]=='A'){
                    comida_atual=0;
                }
            }

        }
        else{//le da direita a esquerda
            for(int j=N-1;j>=0;--j){
                if(tabuleiro[i][j]=='o'){
                    comida_atual++;
                    comida_max=max(comida_atual,comida_max);
                }
                else if(tabuleiro[i][j]=='A'){
                    comida_atual=0;
                }
            }
        }
    }
    cout<<comida_max<<"\n";
    return 0;
}