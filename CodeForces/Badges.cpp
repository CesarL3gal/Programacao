#include <bits/stdc++.h>
using namespace std;
vector<int> alunos(10001);
vector<int> visitado(10001,0);
int dfs(int pos){
    if(visitado[pos]>0){
        return pos;
    }
    visitado[pos]++;
    int proximo = alunos[pos];
    return dfs(proximo);
}

int main(){
    int n;
    cin >> n;
    for(int i = 1;i < n+1 ; i++){
        cin >> alunos[i];
    }
    for(int i=1;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            visitado[j]=0;
        }
        cout << dfs(i) << " ";
    }
    cout << "\n";
    return 0;

}