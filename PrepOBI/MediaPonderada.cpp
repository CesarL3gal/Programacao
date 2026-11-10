#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    float soma=0.0,divisor=0.0;
    for(int i=1;i<n+1;i++){
        divisor+=i;
        float temp;
        cin>>temp;
        soma+=i*temp;
    }
    float resul=soma/divisor;
    if(resul>=5){
        cout<< fixed<<setprecision(2);
        cout<<"Sim\n"<<resul<<"\n";
    }
    else{
		//printf("Nao\n%.02f\n",resul);
        cout<< fixed<<setprecision(2);
		cout<<"Nao\n"<<resul<<"\n";

	}
    return 0;
}