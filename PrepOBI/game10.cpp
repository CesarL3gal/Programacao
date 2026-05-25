#include <iostream>
using namespace std;
int main(){
    int N,D,A;
    cin>>N;
    cin>>D;
    cin>>A;
    //D-onde tem que ir
    //A-posicao atual
    int movimentos=D-A;
    //cout<<movimentos<<'\n';
    if(movimentos<0){
        movimentos=movimentos+N;
    }
    cout<<movimentos<<'\n';

    return 0;
}