#include <iostream>
using namespace std;
int main(){
    string letra;
    int numero=0;
    for(int i=0;i<6;i++){
        cin >> letra;
        if(letra=="V"){
            numero++;
        }
    }
    if(numero<=6 && numero>=5){
        cout<<1<<'\n';
    }
    else if(numero<=4 && numero>=3){
        cout<<2<<'\n';
    }
    else if(numero<=2 && numero>=1){
        cout<<3<<'\n';
    }
    else{
        cout<<-1<<'\n';
    }
    return 0;
}