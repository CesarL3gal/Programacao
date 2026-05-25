#include <iostream>
using namespace std;
int main(){
    int N;
    int P;
    cin>>N;
    cin>>P;
    int soma=P;
    int dias=0;
    while(soma<=N){
        soma=soma*P;
        dias++;
    }
    cout<<dias;
    return 0;
}