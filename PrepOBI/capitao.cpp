#include <bits/stdc++.h>
using namespace std;
int main(){
//T=a*m +2m;
    int T,M;
    cin>>T;
    cin>>M;
    M=M+2; //esses dois adcional vai ser o capitao
    auto ouro_dividido=T/M;
    cout<<ouro_dividido*2<<'\n';
return 0;
}