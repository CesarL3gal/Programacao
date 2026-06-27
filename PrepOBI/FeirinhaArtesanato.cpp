#include <bits/stdc++.h>
using namespace std;

int main() {
int N;
cin>>N;

map<int,int> estoque1;
map<int,int> estoque2; //preço,quantidade no preço
int vetorleitura[N]={};
for(int i=0;i<N;i++){
    cin>>vetorleitura[i];
}
for(auto n : vetorleitura){
    int x;cin>>x;
    if(n==1){
        estoque1[x]++;
    }
    else if(n==2){
        estoque2[x]++;
    }
}
vector<int> clientes;
int C;
cin>>C;
for(int i=0;i<C;i++){
    int x;cin>>x;
    clientes.push_back(x);
}
int soma=0;
for(auto c: clientes){
    if(c==1 && !estoque1.empty()){
        soma+=estoque1.begin()->first;
        estoque1.begin()->second--;

        if( estoque1.begin()->second==0){
            estoque1.erase(estoque1.begin());
        }
    }
    else if(c==0){
        if(estoque1.begin()->first >estoque2.begin()->first && !estoque1.empty() && !estoque2.empty()){
            soma+=estoque2.begin()->first;
            estoque2.begin()->second--;
            if( estoque2.begin()->second==0){
                estoque2.erase(estoque2.begin());
            }        
        }
        else if(estoque1.begin()->first <=estoque2.begin()->first && !estoque1.empty() && !estoque2.empty()){
            soma+=estoque1.begin()->first;
            estoque1.begin()->second--;

            if( estoque1.begin()->second==0){
                estoque1.erase(estoque1.begin());
            }
        }
        else if(!estoque1.empty() && estoque2.empty()){
            soma+=estoque1.begin()->first;
            estoque1.begin()->second--;

            if( estoque1.begin()->second==0){
                estoque1.erase(estoque1.begin());
            }
        }
        else if(estoque1.empty() && !estoque2.empty()){
            soma+=estoque2.begin()->first;
            estoque2.begin()->second--;

            if( estoque2.begin()->second==0){
                estoque2.erase(estoque2.begin());
            }
        }
    }
    else if(c==2 && !estoque2.empty()){
        soma+=estoque2.begin()->first;
        estoque2.begin()->second--;

        if( estoque2.begin()->second==0){
            estoque2.erase(estoque2.begin());
        }
    }
}

cout<<soma<<'\n';
return 0;
}