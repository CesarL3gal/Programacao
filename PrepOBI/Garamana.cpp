#include <bits/stdc++.h>
using namespace std;
int main(){
    int vetor[26]={};
    string texto,texto2;
    int pos;
    cin>>texto;
    for(int j=0; texto[j]!='\0';j++){
        pos=texto[j]-'a';
        vetor[pos]++;
    }

    cin>>texto2;
    for(auto c : texto2){
        if(c!='*'){
            pos=c-'a';
            vetor[pos]--;
        }
    }
    bool tem_negativo=false;

    for(auto n: vetor){
        if(n<0){
            tem_negativo=true;
        }
    }
    if(tem_negativo){
        cout<<"N\n";
    }
    else{
        cout<<"S\n";
    }

    return 0;
}
