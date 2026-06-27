#include <stdio.h>
int encaixa(int a, int b){
    int tamanho_b=1, cb=b;
    while(cb!=0){
        tamanho_b=tamanho_b*10; 
        cb=cb/10;               
        ///57890 890
        //tamanhob =1000
        // cb             =0
    }
    a=a%tamanho_b;
    //57890%1000
    //890
    if(a==b){
        return 1;
    }
    else{
        return 0;
    }
}
int segmento(int a, int b){
    //567890 678
    int temp;
    if(b>a){
        temp=b;
        b=a;
        a=temp;
    }
    int encaixou=0;
    while(a!=0 && encaixou==0){
        int c=encaixa(a,b);
        if(c==0){
            a=a/10;
        }
        else if(c==1){
            encaixou=1;
        }
    }
    if(encaixou==1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int a,b;
    scanf("%d %d",&a, &b);
    int c = segmento(a,b);
    printf("%d\n",c);
    return 0;
}