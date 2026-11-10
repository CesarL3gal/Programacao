    #include <bits/stdc++.h>
    using namespace std;
    int meio,fim,inicio;
    vector<long int> casas(45001);//casas disponiveis
    vector<long int> pacotes(45001);//guarda lugar para entregar
        
    int binary_search(int alvo){
        while(inicio<=fim){
            int meio=inicio + (fim-inicio)/2;
            if(casas[meio]==alvo){
                return meio;
            }
            if(casas[meio]<alvo){
                inicio = meio + 1;
            }
            else{
                fim = meio-1;
            }
        }
        return -1;
    }
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        long int N, M; //casas e pacotes;
        cin >> N >> M;
        for(int i=0;i<N;i++){    
            cin >> casas[i];
        }            
        for(int i=0;i<M;i++){
            cin >> pacotes[i];
        }
        int tempo=0;
        int casa_atual=0;
        for(int i=0;i<M;i++){
            fim=N-1;
            inicio=0;
            meio=N/2;
            auto index = binary_search(pacotes[i]);
            tempo = tempo + abs(index-casa_atual);
            casa_atual=index;
        }
        cout << tempo  << "\n";
        return 0;
    }
