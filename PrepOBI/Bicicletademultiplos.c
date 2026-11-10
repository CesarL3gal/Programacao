#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    long int n ,k; 
    for(int i=0;i<t;i++){
        // long int soma=0;
        scanf("%ld %ld",&n, &k);
        k--;
        long int resul=(n+(k-1))/k;
        // while(n>0){

        //     n-=k;
        //     // printf("%d ",n);
        //     soma++;
        // }
        printf("%ld\n",resul);
    }   
    return 0;
}