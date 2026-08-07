#include <iostream>
using namespace std;
int main(){
    int soma=0,n;
    int maior=0, pos_maior=0;
    int idade;
    for(int i=0;;i++){
        cin>>idade;

        if(idade==-1){
            n=i;
            int media=0;
            if(soma!=0){
                media=soma/n;
            cout<<media<<'\n';
            cout<<maior<<' '<<pos_maior<<'\n';
            }
            else{
                cout << 0 << '\n';
                cout << 0 << ' ' << 0 << '\n';
            }
            return 0;
        }

        soma+=idade;

        if(idade>maior){
            maior=idade;
            pos_maior=i;
        }


    }
    return 0;
}