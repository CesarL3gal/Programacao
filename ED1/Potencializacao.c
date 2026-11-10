    #include <stdio.h>
    float potencializa(float a, int b){
        if(a==0 && b<=0){
            return -1;
        }
        if(b==0){
            return 1;
        }
        if(b>0){
            return a * potencializa(a, b - 1);
        }
        else if (b<0){
            return (1/a)*potencializa(a,b+1);
        }
    }
    int main(){
        int b;
        float a;
        scanf("%f %d", &a, &b);
        float imprimi=potencializa(a,b);
        if(imprimi==-1){
            printf("indefinido\n");
        }
        else{
            if(imprimi==0.0f){
                imprimi=0.0f;
            }
            printf("%f\n",imprimi);
        }
        return 0;
    }