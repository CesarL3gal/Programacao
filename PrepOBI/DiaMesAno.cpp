#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ano;
    cin>>n>>ano;
    bool bissexto = false;
    if((ano%400)==0 || ( (ano%4==0) && ano%100!=0 )){
        bissexto=true;//ano bissexto
    }

    if(n>365 && !bissexto){
        cout<<"Entradas invalidas!"<<'\n';
        return 0;
    }
    else if(n>365 && bissexto){
        cout<<"Entradas invalidas!"<<'\n';
        return 0;
    }
    int meses[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    if(bissexto){
        meses[1]=29;
    }

    for(int i=0;i<12;i++){
        if(n>meses[i]){
            n=n-meses[i];
        }
        else{
            printf("%02d/%02d/%04d\n", n , i+1 , ano);
            return 0;
        }
    }

    return 0;
}
/*
Janeiro 31
Fevereiro 28 ou 29
Março 31
Abril 30
Maio 31
Junho 30
Julho 31
Agosto 31
Setembro 30
Outubro 31
Novembro 30
Dezembro 31
*/