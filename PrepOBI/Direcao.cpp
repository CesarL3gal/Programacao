#include <bits/stdc++.h>
using namespace std;
int angulo(string D){
    if(D=="norte")return 0;
    else if(D=="oeste")return 90;
    else if(D=="sul")return 180;
    else if(D=="leste")return 270;
    
}
int main(){
string A;
string B;
cin>>A>>B;
int d1,d2;
d1=angulo(A);
d2=angulo(B);
int resultado=abs(d1-d2);
resultado=min(resultado,360-resultado);
cout<<resultado<<'\n';
return 0;
}