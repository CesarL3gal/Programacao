#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,K;
    //n participantes // k para ser aprovado
    cin>>N>>K;
    vector<int> notas(N);
    //identificador
    for(int i=0;i<N;i++){
        cin>>notas[i];
    }
    sort(notas.begin(),notas.end());
    cout<<notas[N-K];
    
    return 0;
}