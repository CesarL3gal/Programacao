#include <iostream>
using namespace std;
int main(){
    char letra;
    string texto;

    cin>>letra;
    getchar();
    getline(cin,texto);

    int numero_palavra=1, palavra_com_letra=0;
    bool palavra_nova=true;
    int m=texto.size();
    for(int i=0 ; i<m ; i++){
        if(texto[i-1]==' ' && i>0 && texto[i]!=' '){
            palavra_nova=true;
            numero_palavra++;
        }
        if(palavra_nova==true && texto[i]==letra){
            palavra_com_letra++;
            palavra_nova=false;
        }
        if(texto[i]==' '){
            palavra_nova=false;
        }
    }
    float porcentagem=((float)palavra_com_letra/numero_palavra)*100;
    printf("%0.1f\n",porcentagem);
    return 0;
}