//Figurinhas da copa
#include <bits/stdc++.h>
using namespace std;
int main() {
int N,C,M;
cin>>N>>C>>M;
set<int> figurinhas_carimbadas;
multiset<int> figurinhas_compradas;
    for(int i=0;i<C;i++){
        int x; cin>>x;
        figurinhas_carimbadas.insert(x);
    }
    for(int i=0;i<M;i++){
        int x; cin>>x;
        figurinhas_compradas.insert(x);
    }
    int obj=figurinhas_carimbadas.size();
    for(auto fg:figurinhas_carimbadas){
        if(figurinhas_compradas.find(fg)!=figurinhas_compradas.end()){
            obj--;
        }
    }
    cout<<obj<<'\n';
    return 0;
}