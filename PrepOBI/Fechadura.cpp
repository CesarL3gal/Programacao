#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    vector<int> pinos(N);
    for(int i=0;i<N;i++){
        cin>>pinos[i];
    }
    int movimentos=0;
    for(int i=0;i<N-1;i++){ //N-1 pq vai pegar os dois ultimos pinos
        int diferença = M - pinos[i];
        movimentos+= abs(diferença);
        pinos[i]=M;
        pinos[i+1]+=diferença;
    }
    cout<<movimentos<<'\n';
    return 0;
}