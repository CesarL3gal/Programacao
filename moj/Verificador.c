#include<stdio.h>
int main(){
    int numero;
    scanf("%d",&numero);
    int n1 = numero/100000;
    int n2 = (numero%100000)/10000; //*2
    int n3 = (numero%100000%10000)/1000; //*3
    int n4 = (numero%100000%10000%1000)/100; //*4
    int n5 = (numero%100000%10000%1000%100)/10; //*5
    int n6 = (numero%100000%10000%1000%100%10); //*6 

    int nt=(n6*2)+(n5*3)+(n4*4)+(n3*5)+(n2*6)+(n1*7);
    int pedra = nt%11;
    int resultado = 11-pedra;
    printf("%d",resultado);






    /*printf("%d\n",n1);
    printf("%d\n",n2);
    printf("%d\n",n3);
    printf("%d\n",n4);
    printf("%d\n",n5);
    printf("%d\n",n6);
    printf("\n");
    n6=n6*2;
    n5=n5*3;
    n4=n4*4;
    n3=n3*5;
    n2=n2*6;
    n1=n1*7;
    printf("%d\n",n1);
    printf("%d\n",n2);
    printf("%d\n",n3);
    printf("%d\n",n4);
    printf("%d\n",n5);
    printf("%d\n",n6);
    */
   
    return 0;
}