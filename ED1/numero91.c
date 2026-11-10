#include <stdio.h>
long int n_91(int n){
    if(n>=101){
        return  n - 10;
    }
    if(n<=100){
    return n_91(n_91(n+11));
    }
}
int main(){
    int n;
    while(1==1){
        scanf("%d",&n);
        if(n==0){
            return 0;
        }
        else{
            printf("f91(%d) = %ld\n",n,n_91(n));
        }   
    }
    return 0;
}