#include <stdio.h>
#include <stdbool.h>
struct produto{
 char marca[80];
 char modelo[80];
 int quantidade;

};
int pesquisarEstoque(char marca[80],struct produto v[],int n){
    //printf("Pesquisar %s\n",marca);
    int soma=0;
    for(int i=0;i<n;i++){
        bool achou=true;
        int k=0;
        for(int j=0;j<n;j++){
            if(v[i].marca[j]!=marca[k] && marca[k]!=EOF){
                achou=false;
            }
            k++;
        }
        if(achou){
            printf("%s %d\n",v[i].modelo, v[i].quantidade);
            soma+=v[i].quantidade;
        }
    }
    return soma;
}