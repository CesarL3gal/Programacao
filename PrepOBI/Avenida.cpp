#include <iostream>
using namespace std;
//pontos de onibus
//ponto 1 = 0
//ponto 2 = 400
//ponto 3 = 800
//ponto 4 = 1200
//ponto 5 = 1600
//ponto 6 = 2000
int main(){
    int D;
    cin>>D;
    int C;
    int pontos[6]={0,400,800,1200,1600,2000};
    if(D<=200){
        C=pontos[0]-D;
    }
    else if(D>200 && D<=600){
        C=pontos[1]-D;
    }
    else if(D>600 && D<=1000){
        C=pontos[2]-D;
    }
    else if(D>1000 && D<=1400){
        C=pontos[3]-D;
    }
    else if(D>1400 && D<=1800){
        C=pontos[4]-D;
    }
    else if(D>=1800){
        C=pontos[5]-D;
    }
    if(C<0){
        C=C*-1;
    }
    cout<<C<<'\n';

    return 0;
}


