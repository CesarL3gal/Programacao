#include <iostream>
using namespace std;
int main(){
    int P1,C1,P2,C2;
    cin>>P1>>C1>>P2>>C2;
    int M1=P1*C1,M2=P2*C2;
    if(M1==M2){
        cout<<0;
    }
    else if(M1>M2){
        cout<<-1;
    }
    else{
        cout<<1;
    }
    return 0;
}