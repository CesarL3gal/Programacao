#include <iostream>
using namespace std;
//pao - 1 ponto
//doce - 2 ponto
//bolo - 3 pontos
int main(){
    int P,D,B;
    cin>>P;
    cin>>D;
    cin>>B;
    int sum=P+(D*2)+(B*3);
    if(sum>=150){
        cout<<'B';
    }
    else if(sum>=120){
        cout<<'D';
    }
    else if(sum>=100){
        cout<<'P';
    }
    else{
        cout<<'N';
    }
    return 0;
}