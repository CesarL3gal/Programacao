#include <iostream>
using namespace std;
bool ehletra(char c){
    return(c>='A' && c<='Z');
}
bool ehnumero(char c){
    return(c>='0' && c<='9');
}

int main(){
    string placa;
    cin>>placa;
    bool mercosul=false, brasil=false;
    
    if(placa[3]=='-' && (int)placa.size()==8){
        // string part1 = placa.substr(0,3);
        // string part2 = placa.substr(4,4);
        bool valida=true;
        // cout<<part1<<'\n'<<part2;
        for(int i=0;i<3;i++){
            if(ehletra(placa[i])==false){
                valida=false;}
        }
        for(int i=4;i<8;i++){
            if(ehnumero(placa[i])==false){
                valida=false;}
        }
        if(valida)brasil=true;
    }

    else if((int)placa.size()==7){
        // string part1=placa.substr(0,3);
        // string part2=placa.substr(3,1);
        // string part3=placa.substr(4,1);
        // string part4=placa.substr(5,2);
        // cout<<part1<<'\n'<<part2<<'\n'<<part3<<'\n'<<part4;
        bool valida=true;
        for(int i=0;i<3;i++){
            if(ehletra(placa[i])==false){
                valida=false;}
        }
        if(ehnumero(placa[3])==false)valida=false;
        if(ehletra(placa[4])==false)valida=false;
        for(int i=5;i<7;i++){
            if(ehnumero(placa[i])==false){
                valida=false;}
        }

        if(valida) mercosul=true;
    }
    if(brasil){
        cout<<1<<'\n';
    }
    else if(mercosul){
        cout<<2<<'\n';
    }
    else{
        cout<<0<<'\n';
    }
    return 0;
//Brasil
//AAA-1111

///Mercosul
//AAA1A11

}