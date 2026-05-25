#include<iostream>

using namespace std;

int main(){
    int P, R;
    cin >>P>>R;
    if(!P){
        cout<<"C"<<'\n';
    }
    else if(P){
        if(R){
        cout<<"A"<<'\n';
        }
        else{
        cout<<"B"<<'\n';
        }
    }

    return 0;
}