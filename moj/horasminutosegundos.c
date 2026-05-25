#include <stdio.h>
int main(){
    long long int horas=0;
    long long int minutos=0;
    long long int segundos=0;

    scanf("%lld", &horas);
    minutos=horas*60;
    segundos=horas*60*60;

    printf("%lld\n",minutos);
    printf("%lld\n",segundos);
    
    return 0;
}