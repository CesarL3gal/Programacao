#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int vetor[N]={};
    for(int i=0;i<N;i++){
        cin>>vetor[i];
    }
    int soma=1,ultimonumero=vetor[0];
    for(int i=0;i<N;i++){
        if(vetor[i]!=ultimonumero){
            soma++;
            ultimonumero=vetor[i];
        }
    }
    cout<<soma;
    return 0;
}