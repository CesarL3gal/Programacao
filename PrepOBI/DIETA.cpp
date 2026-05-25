#include <iostream>

using namespace std;
int main(){
    //1 proteina 4 calorias
    //1 gordura 9 caloria
    // 1 carboidratro tem 4 calorias
    //A primeira linha da entrada contém dois inteiros Ne M: a quantidade de refeições na lista de John e o limite de calorias,respectivamente.
    //Cada uma das Nlinhas seguintes contém três inteiros, P, Ge C: as quantidades (em gramas) de proteínas, gorduras e carboidratos, respectivamente, de uma refeição na lista de John
    int N, M;
    int P, G, C;
    cin>>N>>M;
    int calorias=0;
    for(int i=0;i<N;i++){
        cin>>P>>G>>C;
        calorias=calorias + ((P*4)+(G*9)+(C*4));
    }
    cout<<M-calorias;
    return 0;
}