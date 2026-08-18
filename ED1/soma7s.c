#include <stdio.h>
int soma=0;
int soma_7(){
    int numero=getchar();
    if(numero=='\n' || numero == EOF){
        return soma;
    } 
    if(numero=='7'){
        soma++;
    }
    soma_7();

}
int main(){
    int n = soma_7();
    printf("%d",n);
    return 0;
}