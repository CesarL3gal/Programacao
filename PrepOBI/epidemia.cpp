#include <iostream>
using namespace std;
int main(){
    int N,R,P;
    cin>>N;
    cin>>R;
    cin>>P;
    int soma=N;
    int dia;
    for(dia=0;soma<P;dia++){
        N=N*R;
        soma=soma+N;
        // cout<<soma<<'\n';
    }
    cout<<dia<<'\n';

    return 0;
}