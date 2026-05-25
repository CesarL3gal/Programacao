#include <iostream>
using namespace std;
int main(){
    int N, soma=0;
    cin>>N;
    int m;
    int indice=0;
    bool primeiro=true;
    for(int i=0;i<N ;i++){
        cin>>m;
        soma=soma+m;
        if(soma>=1000000 && primeiro==true){
            indice=i;
            primeiro=false;
        }
    }
    cout<<indice+1;
    return 0;
}