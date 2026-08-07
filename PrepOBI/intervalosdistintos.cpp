#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin>>N;

    vector<int> freq(100005, 0);
    vector<int> numeros (N);

    for(int i=0;i<N;i++){
        cin>>numeros[i];
    }
    int max=0;

    int L=0;
    for(int i=0;i<N;i++){
        freq[numeros[i]]++;
        while(freq[numeros[i]] >1){
            freq[numeros[L]]--;
            L++;
        }
        int tamanho_atual = i - L + 1;
        if (tamanho_atual > max) {
            max= tamanho_atual;
        }
    }
    cout<<max<<'\n';
    return 0;
}