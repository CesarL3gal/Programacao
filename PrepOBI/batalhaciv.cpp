#include <bits/stdc++.h>
using namespace std;
/*
Civilização	Nível 1	Nível 2	Nível 3
Fogo	      2.0	    3.0	        5.0
Água	     1.0        2.5	        4.0
Terra	      2.5	      5.5	      7.0
*/
double fogo(int nivel){
    switch(nivel){
        case 1:
         return 2.0;
        case 2:
         return 3.0;
        case 3:
         return 5.0;
    }
    return 0;
}
double agua(int nivel){
    switch(nivel){
        case 1: 
        return 1.0;
        case 2: 
        return 2.5;
        case 3:
         return 4.0;
    }
    return 0;
}
double terra(int nivel){
    switch(nivel){
        case 1: 
        return 2.5;
        case 2: 
        return 5.5;
        case 3:
         return 7.0;
    }
    return 0;
}
/*
Civilização	Nível 1	Nível 2	Nível 3
Fogo	      2.0	    3.0	        5.0
Água	     1.0        2.5	        4.0
Terra	      2.5	      5.5	      7.0
*/
/*
Jogador         	Fogo	Água	Terra
Fogo	                1.0	    0.5	        2.0
Água	                2.0	    1.0     	0.5
Terra	                 0.5	  2.0	     1.0
*/
double calculaVantagem(int tipoPlayer, int tipoCPU){
        double matrizVantagem[3][3]={
            //terra ,fogo, agua
            {1.0 , 0.5 , 2.0}, //terra
            {2.0 , 1.0 , 0.5}, //fogo
            {0.5 , 2.0, 1.0} // agua
        };
       // cout<< "Vantagem : "<<matrizVantagem[tipoPlayer-1][tipoCPU-1]<<'\n';
    return matrizVantagem[tipoPlayer-1][tipoCPU-1];
}
//Terra = 1 , Fogo = 2 , Água = 3
double calculaDano(int tipoPlayer, int nivelPlayer, int tipoCPU, double defesaCPU){
    double multNivel;
    switch(tipoPlayer){
        case 1:
        multNivel=terra(nivelPlayer);
        break;
        case 2:
        multNivel=fogo(nivelPlayer);
        break;
        case 3:
        multNivel=agua(nivelPlayer);
        break;
    }
     //cout<<"Multinivel : "<<multNivel<<'\n';
    double dano = (100 * multNivel * calculaVantagem(tipoPlayer,tipoCPU)) - defesaCPU;
    if(dano>=0.0){
    return dano;
    }
    else{
        return 0.0;
    }
}
/* int main(){
    int tipoPlayer, nivelPlayer, tipoCPU;
    double defesaCPU;
    cin >> tipoPlayer >> nivelPlayer;
    cin >> tipoCPU >> defesaCPU;

    printf("%.06lf\n",fogo(nivelPlayer));
    printf("%.06lf\n",agua(nivelPlayer));
    printf("%.06lf\n",terra(nivelPlayer));
    printf("%.06lf\n",calculaVantagem(tipoPlayer,tipoCPU));
    printf("%.06lf\n",calculaDano(tipoPlayer, nivelPlayer, tipoCPU, defesaCPU));
    return 0;
}
*/