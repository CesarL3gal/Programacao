#include<iostream>

using namespace std;

int main(){
    int P;
    int D1,D2;
    cin>>P;
    cin>>D1;
    cin>>D2;
    int res = (D1+D2)%2;
    if(P==res){
        cout<<0<<'\n';
    }else if (P!=res){
        cout<<1<<'\n';
    }
    return 0;
}