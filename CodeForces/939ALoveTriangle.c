#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    scanf("%d",&n);
    int g[5000]={};
    for(int i=0;i<n;i++){
        scanf("%d",&g[i]);
    }
    bool achou=false;
    for(int i=0;i<n;i++){
        int a = g[i]-1;
        int b=g[a]-1;
        int c=g[b]-1;
        if(c==i){
            achou=true;
            break;
        }
    }
    if(!achou){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    return 0;
}