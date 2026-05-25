#include<iostream>

using namespace std;

int main(){
    int i1,i2;
    cin>>i1>>i2;
    int soma=0;
    if(i1<=17){ // 15
        soma=soma+15;
    }
    else if(i1>17 && i1<60){ //30
        soma=soma+30;
    }
    else if(i1>=60){ //20
        soma=soma+20;
    }

    if(i2<=17){ // 15
        soma=soma+15;
    }
    else if(i2>17 && i2<60){ //30
        soma=soma+30;
    }
    else if(i2>=60){ //20
        soma=soma+20;
    }
    cout << soma <<'\n';
    return 0;
}