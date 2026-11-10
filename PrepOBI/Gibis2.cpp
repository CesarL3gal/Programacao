#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N,R;
    cin >> N >> R;
    vector<int> vetor(N);
    for(int i=0;i<N;i++){
        cin >> vetor[i];
    }           
    sort(vetor.begin(),vetor.end());
    
    if(vetor[0]>R){
        printf("0\n");
        return 0;
    }
    int soma=0;
    for(int i=1;i<=N && soma<=R;i++){
        soma+=vetor[i];
        if(soma>=R){
            cout << i;
            return 0;
        }   
    }
    printf("\n");
    return 0;
}