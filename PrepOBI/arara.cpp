#include <iostream>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    int espacos = 1+5*(N-1);
    //cout<<espacos<<'\n';
    if(M>=espacos){
        cout<<"S\n";
    }else{
        cout<<"N\n";
    }
    return 0;
}
