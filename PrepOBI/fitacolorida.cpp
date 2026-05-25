#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> fita(N);
    for(int i=0;i<N;i++){
        cin>>fita[i];
    }
    vector<int> distancia(N,10000);
    int ultimo_zero=-1;
    for(int i=0;i<N;i++){
        if(fita[i]==0){
            ultimo_zero=i;
            distancia[i]=0;
        }
        else if(ultimo_zero!=-1){
            distancia[i]=i-ultimo_zero;
        }
    }
    ultimo_zero=-1;
    for(int i=N-1;i>=0;i--){
        if(fita[i]==0){
            ultimo_zero=i;
        }
        else if(ultimo_zero!=-1){
            distancia[i]=min(distancia[i],ultimo_zero-i);
        }
    }

    for(int i=0; i<N;i++){
        int tom=distancia[i];
        if(tom>=9){
            cout<<"9 ";
        }
        else{
            cout<<tom<<" ";
        }
    }

    return 0;
}