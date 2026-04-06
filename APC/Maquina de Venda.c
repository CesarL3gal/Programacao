#include <stdio.h>
int main(){
    int preco=0;
    int dinheiro=0;
    scanf("%d", &preco);
    scanf("%d", &dinheiro);
    int troco=dinheiro-preco;
    //moedas 500,100,50,10,5,1
    int Y500=0,Y100=0,Y50=0,Y10=0,Y5=0,Y1=0;
    Y500 = troco/500;
    Y100 = (troco % 500)/100;
    Y50 = (troco % 500 % 100)/50;
    Y10 = (troco % 500 % 100 % 50)/10;
    Y5 = (troco % 500 % 100 % 50 % 10)/5;
    Y1 = (troco % 500 % 100 %50%10%5)/1;    

    printf("%d\n",Y500);
    printf("%d\n",Y100);
    printf("%d\n",Y50);
    printf("%d\n",Y10);
    printf("%d\n",Y5);
    printf("%d",Y1);
    return 0;
}