#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,nl,P,I;
    cin>>N;
    vector<int> x(N);
    for(int i=0;i<N;i++){
        cin>>nl;
        x[i]=nl;
    }
    cin>>P;
    int vendas=0;
   for(int i=0;i<P;i++){
        cin>>I;
        if(x[I-1]>0){
            x[I-1]=x[I-1]-1;
            vendas++;
        }
   }
   cout<<vendas;
    return 0;
}