#include <bits/stdc++.h>
using namespace std;
int main(){
    //multiplos de um numero N = total/N
    //mas se repetir, devemos subtrair para nao repetir
    //1 2 3 4 5 6 , 6 é divisivel por 2 e 3
    //mmc de 2 e 3 é 6, os multiplos de 6 serão subtraidos
    //nao vamos passar comparando Numero por Numero, enquanto for menor que N
    int soma=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N,K;
    cin>>N>>K;
    vector<int> ks(K);
    for(int i=0;i<K;i++){
        cin>>ks[i];
    }

    vector<long long> mmc; //vtor que vai carregar todos os numeros pra dividir e seus mmc, pra tirar eles depois 
    vector<long long> simbolo;

    for(int i=0;i<K;i++){
        int tamanho=mmc.size();
        mmc.push_back(ks[i]);
        simbolo.push_back(1);
        for(int j=0;j<tamanho;j++){
            long long novo_mmc=lcm(mmc[j],ks[i]);
            if(novo_mmc<=N){
                mmc.push_back(novo_mmc);
                simbolo.push_back(simbolo[j]*(-1)); 
            }
        }
    }


    long long divisores=0;
    for(size_t m=0;m<mmc.size();m++){
        divisores=divisores+(N/mmc[m]*simbolo[m]);
    }
    cout<<N-divisores<<'\n';
    return 0;
}