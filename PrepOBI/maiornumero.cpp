#include <iostream>
using namespace std;
int main(){
    int maior=0;
    int numero;
    do{
        cin>>numero;
        if(numero>=maior){
            maior=numero;
        }
    }
    while(numero!=0);
    cout<<maior;
    return 0;
}