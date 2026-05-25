#include<iostream>

using namespace std;

int main(){
        int Ia, Ib, Fa, Fb;
        cin >> Ia >> Ib >> Fa >> Fb;
    int ac=0;
    if(Ib!=Fb){
        Ib=Fb;
        if(Ia==0){
                Ia=1;
        }
        else{
                Ia=0;
        }
        ac++;
    }
    if(Ia!=Fa){
        Ia=Fa;
        ac++;
    }
    cout<<ac<<'\n';
    return 0;
}