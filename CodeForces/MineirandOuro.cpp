#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int matriz[n][n];
    int maximo[n][n]={};
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            cin >> matriz[i][j];
        }
    }
    // para a célula na diagonal de cima e à direita;
    // para a célula imediatamente à direita;
    // para a célula na diagonal de baixo e à direita.
    for(int j=n-1;j>=0;j--){
        for(int i=0;i<n;i++){
            if(j==n-1){
                maximo[i][j]=matriz[i][j];
            }
            else if(i==0 && j!=n-1){
                maximo[i][j] = max(maximo[i][j+1], maximo[i+1][j+1]) + matriz[i][j];
            }
            else if(i==n-1 && j!=n-1){
                maximo[i][j] = max(maximo[i][j+1], maximo[i-1][j+1])  + matriz[i][j];
            }
            else{
                maximo[i][j] = max(maximo[i][j+1], max(maximo[i-1][j+1],maximo[i+1][j+1])) + matriz[i][j];
            }
        }
    }
    // cout<<"\n";
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout << maximo[i][j] << " ";
    //     }
    //     cout<<"\n";
    // }
    int maior=0;
    for(int i=0;i<n;i++){
        if(maximo[i][0]>=maior){
            maior=maximo[i][0];
        }
    }
    cout << maior;
    return 0;

}