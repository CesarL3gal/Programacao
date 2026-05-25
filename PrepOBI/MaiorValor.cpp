#include <iostream>
using namespace std;
int main(){
    int N,M,S;
    cin>>N>>M>>S;
    //soma dos algarismos de I = S;
    //I entre [N,M]
    for(int i=M;i>=N && i<=M;i--){ //começar pelo maior pra pegar o maior numero que isso é verdade
        int copia=i;
        int soma=0;
        while(copia>0){
            soma+=copia%10;
            copia=copia/10;
        }
        if(soma==S){
            cout<<i<<'\n';
            return 0;
        }
    }

    cout<<-1<<'\n';
return 0;
}