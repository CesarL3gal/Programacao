#include <stdio.h>
long int fibonacci(int n){
    static long int memoria[90]={};
    if(n==1 || n==2){
        return 1;
    }
    if(memoria[n]!=0){
        return memoria[n];
    }
    else{
        memoria[n] = fibonacci(n-1) + fibonacci(n-2);
        return memoria[n];
    }
}
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("F(%d) = %ld",n , fibonacci(n));
//     return 0;
// }