#include <bits/stdc++.h>
using namespace std;

int main() {
multiset<int> bahia;
set<int> notas_unicas;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    bahia.insert(x);
    notas_unicas.insert(x);
}
int maior=0;
int nota_frequente;
// vai de nota em nota, contando e vendo qual aparece mais
for(auto nota : notas_unicas){
    int freq=bahia.count(nota);
    if(freq>=maior){
        maior=freq;
        nota_frequente=nota;
    }
}

cout<<nota_frequente<<'\n';
return 0;
}