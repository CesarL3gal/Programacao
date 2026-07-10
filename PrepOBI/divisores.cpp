#include <bits/stdc++.h>
using namespace std;
int main(){
    int M;
    cin>>M;
    int contador=0;
    for(int d=1;d*d<=M;d++){
        if(M%d==0){
            contador++;
            auto c = M/d;
            if(c!=d){
                contador++;
            }
        }
    }
    cout<<contador<<'\n';
return 0;
}