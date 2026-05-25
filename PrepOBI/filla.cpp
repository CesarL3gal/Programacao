#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,M,m;
    cin>>N;
    vector<int> fita(N);
    //identificador
    for(int i=0;i<N;i++){
        cin>>fita[i];
    }
    cin>>M;
    vector<int> sairam(100005,0);
    for(int i=0;i<M;i++){
        cin>>m;
        sairam[m]=1;
    }

    bool primeiro=true;
    for(auto x: fita){
        if(sairam[x]==0){
            if(!primeiro){
                cout<<" ";
            }
            cout<< x;
            primeiro=false;
        }
    }
    
    
    return 0;
}