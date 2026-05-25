#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    int Tp=0,Tg=0;
    int P,M;
    cin>>N;
    int m;
    for(int i=0;i<N;i++){
        cin>>m;
        if(m==1){
            Tp++;
        }
        else if (m==2){
            Tg++;
        }
    }
    cin>>P;
    cin>>M;
    if(P>=Tp && M>=Tg){
        cout<<"S\n";
    }
    else{
        cout<<"N\n";
    }
    return 0;
}