#include <stdio.h>
unsigned long long factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
} 
int main(){
    /*int n;
    scanf("%d",&n);*/
    printf("%llu\n",factorial(65));
    return 0;
}