#include <iostream>
using namespace std;
int main(){
    int X, N;
    cin>>X;
    cin >>N;
    int mes;
    int X2=X;

    //100-(50)=50
    //50+100
    //150-(120)
    for(int i=0;i<N;i++){
        cin>>mes;
        X2=X2-mes;
        X2=X2+X;
    }
    cout<<X2<<'\n';
    return 0;
}