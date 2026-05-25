#include <iostream>
using namespace std;
int main(){
    string texto;
    getline(cin,texto);
    int n = (int)texto.size();
    string copia="";
    for(int i=0; i<n ;i++){
        if(texto[i]==' '){
            copia+=' ';
        }
       else if(texto[i]=='p'){
            copia+=texto[i+1];
            i++;
        }

    }
    cout<<copia<<'\n';

return 0;
}