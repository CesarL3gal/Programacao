#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    int maior=a;
    if(b>maior){
    maior=b;
    }
    if(c>maior){
    maior=c;
    }

    int menor=a;
    if(b<menor){
    menor=b;
    }
    if(c<menor){
    menor=c;
    }

    int soma = a + b + c;
    //cout<<soma<<endl;
    int meio= soma - (maior +menor);
    cout<<meio<<endl;
    return 0;
}