#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> valor_pos(52,0);
    for(int i=0;i<52;i++){
        char C,K;
        cin>>C>>K;
        if(C=='K' || C=='J' || C=='Q' || C=='T'){
            valor_pos[i]+=10;
        }
        else if(C=='A'){
            valor_pos[i]++;
        }
        else if(C>='2' && C<='9'){
            valor_pos[i]+=(C-'0');
        }
    }

    //     for(int i=0;i<52;i++){
    //         cout<<valor_pos[i]<<' ';
    //         if(i%13==0){
    //             cout<<'\n';
    //         }
    //     }

    int soma_maxima=0;
    int soma_consecutiva=0;
    bool continua=true;
    for(int i=0;i<52 && continua==true ;i++){
        soma_consecutiva+=valor_pos[i];
        if(soma_consecutiva>21){
            soma_consecutiva=0;
            continua=false;
        }
        if(soma_consecutiva>soma_maxima){
            soma_maxima=soma_consecutiva;
        }
    }

    cout<<soma_maxima<<'\n';
    return 0;
}
