#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int viagens=3;
    if((a+b)<c){
        viagens=viagens-2;
        cout<<viagens;
        return 0;
    }
    if(a<b){
        viagens--;
    }
    if(b<c){
        viagens--;
    }
    cout<<viagens;
    return 0;
}