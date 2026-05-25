#include <stdio.h>

int main(){

    int vet1[10000];
    int o , tamanho , valores , i , indice;
    
        scanf("%d\n", &tamanho);
        
        for(o = 0  ; o < tamanho ; o++ ){
        
                scanf("%d", &valores);
            vet1[o] = valores;
            }
            
         for(o = 0 , i = 1 ; i < tamanho ; o++ , i++){   
            if(vet1[o] < vet1[i])
                indice = o;
                
                }
             printf("%d", indice);
             return 0;
  }   
                