#include <bits/stdc++.h>
using namespace std;
int main(){
      int N;
    cin>>N;
    vector<vector<int>> cubo(N, vector<int>(N));
    int posI,posJ;
    for(int i=0; i<N ;i++){
        for(int j=0; j<N ;j++){
            cin>>cubo[i][j];
            if(cubo[i][j]==0){
                posI=i;
                posJ=j;
            }
       }
    }
    int soma=0;
    if(posI==0){
        for(int j=0;j<N;j++){
            soma+=cubo[1][j];
        }
    }
    else{
        for(int j=0;j<N;j++){
            soma+=cubo[0][j];
        }
    }
    //cout<<soma<<'\n';
    int resultado=soma;
    for(int i=0;i<N;i++){ //o que falta pra completar
        resultado=resultado-cubo[posI/10][i];
    }
    cout<<resultado<<'\n'<<posI+1<<'\n'<<posJ+1<<'\n';
    return 0;
}