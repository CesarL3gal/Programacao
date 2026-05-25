#include <iostream>
using namespace std;
int main(){
   int A,B,C,D;
   cin>>A;//volume minimo
   cin>>B;//volume maximo
   cin>>C;//capacidade copo
   cin>>D;//volume dosagem cafe da maquina
   //int dosagem=0;
   bool permitir=false;
   for(int i=0;i<C;i++){
        if(C-(i*D)<=B && C-(i*D)>=A){
            permitir=true;
            break;
        }
   }
   if(permitir==true){
    cout<<"S"<<'\n';
   }
   else{
    cout<<"N"<<'\n';
}

    return 0;
}