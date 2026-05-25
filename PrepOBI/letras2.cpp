#include <iostream>
using namespace std;
int main(){
    char letra;
    cin>>letra;
    int total=0, palavra_com_letra=0;
    for(string palavra ; cin>>palavra; total++){
        if(palavra.find(letra)!=string::npos){ //npos= no position found
            palavra_com_letra++;
        }
    }
    float porcentagem=((float)palavra_com_letra/total)*100;
    printf("%0.1f\n",porcentagem);
    return 0;
}