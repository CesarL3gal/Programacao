#include <iostream>
using namespace std;
int main(){
    int N, S;
    cin>>N; //numero de dias 
    cin >>S;//saldo
    int dia;
    int menor=S;
    for(int i=0;i<N;i++){
        cin>>dia;
        S=S+dia;
        if(S<menor){
            menor=S;
        }

    }
    cout<<menor<<'\n';
    return 0;
}