#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;

    vector<int> A(N);
    int m;

    for(int i=0;i<N;i++){
        cin>>m;
        A[i]=m;
    }

    int valor=A.front()+A.back();
    //cout<<valor<<'\n';
    bool escher=true;
    int ultimo=A.size()-1;

    for(int i=0;i<=ultimo;i++, ultimo--){
        if(A[i]+A[ultimo]!=valor){
            escher=false;
            break;
        }
    }
    
    if(escher){
        cout<<"S"<<'\n';
    }
    else{
        cout<<"N"<<'\n';
    }
    return 0;
}