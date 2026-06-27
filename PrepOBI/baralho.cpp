#include <iostream>
using namespace std;
void processar(int vetor[]){
    bool erro=false;
    int contador=0;
     for(int i=0; i<=13;i++){
         if(vetor[i]>1){
             erro=true; //duas cartas na mesma posição
         }
         else if(vetor[i]==1){
            contador++;
         }
    }
    if(erro){
        cout<<"erro\n";
    }
    else{
        cout<<13-contador<<'\n';
    }
}
int main(){
    string texto;
    cin>>texto;
    int C[14]={0}; //Copas
    int E[14]={0};  //espadas
    int O[14]={0}; // ouros
    int P[14]={0};  //paus
    //13P 02P 01P 03P 04P 05P 06P 07P 08P 09P 10P 11P 12P
    for(int i=0;i<(int)texto.size();i+=3){
        int numero=stoi(texto.substr(i,2));
        //nao esquecer
        //stoi transforma em int
        //substr mostra 2 termos a partir do indexi
        char naipe = texto[i+2];
        if(naipe=='C'){
            C[numero]++;
        }   
        else if(naipe=='E'){
            E[numero]++;
        }
        else if(naipe=='U'){
            O[numero]++;
        }
        else if(naipe=='P'){
            P[numero]++;
        }
    }

    processar(C);
    processar(E);
    processar(O);
    processar(P);
    // bool erroc=false;
    // bool erroe=false;
    // bool erroo=false;
    // bool errop=false;
    // for(int i=0; i<=13;i++){
    //     if(C[i]>1){
    //         erroc=true;
    //     }
    //     else if(C[i]==1){

    //     }
    // }


    return 0;
}