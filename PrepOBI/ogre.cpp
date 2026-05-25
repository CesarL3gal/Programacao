#include <iostream>
using namespace std;

int main(){
    int E;
    int D;
    cin>>E;
    cin>>D;
    int resultado;
    if(E>D){
        resultado=E+D;
    }
    else{
        resultado=2*(D-E);
    }
    cout<<resultado;
}