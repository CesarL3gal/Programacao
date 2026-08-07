#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin>>N;
    vector<int> P(N);
    for(int i=0;i<N;i++){
        cin>>P[i];
    }
    vector<bool> escuro(N);
    int total_escuros=0;

    for(int i=0;i<N;i++){
        if(i==N-1){
            if(P[i]+P[0]<1000){
                escuro[i]=true;
                total_escuros++;
            }
            else{
                escuro[i]=false;
            }
        }
        else{
            if(P[i]+P[i+1]<1000){
                escuro[i]=true;
                total_escuros++;
            }
            else{
                escuro[i]=false;
            }
        }
    }
    if(total_escuros==N){
        cout<<N<<"\n";
        return 0;
    }
    int max_consecutivos=0;
    int atual_consecutivos=0;

    for(int i=0;i<2*N;++i){
            if(escuro[i%N]){
            atual_consecutivos++;
            if(atual_consecutivos>max_consecutivos){
                max_consecutivos=atual_consecutivos;
            }
        }
        else{
            atual_consecutivos=0;
        }
    }
    cout<<max_consecutivos<<'\n';
    return 0;
}