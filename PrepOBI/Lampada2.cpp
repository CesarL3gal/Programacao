#include<iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    //0= apagado //par
    //1= ligado //impar
    int I,La=0,Lb=0;
    for(int i=0;i<N;i++){
        cin>>I; //1 muda a A //2 muda A e B
        if(I==1){
            La++;
        }
        else{
            La++;
            Lb++;
        }
    }
    cout<< La%2<<'\n'<<Lb%2;
    
    return 0;
}