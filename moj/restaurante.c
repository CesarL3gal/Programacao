#include <stdio.h>
int main(){
int nrestaurante;
for(int k=0; scanf("%d",&nrestaurante)!=EOF ;k++){
        int cod,nota;
        int maior=-1,melhor_do_dia;
        for(int i=0;i<nrestaurante;i++){
            scanf("%d %d",&cod,&nota);
            //getchar();
            if(nota>maior){
               maior=nota;
               melhor_do_dia=cod;
            }
            else if(nota==maior){
                maior=nota;
                if(melhor_do_dia>cod){
                    melhor_do_dia=cod;
                }
            }
        }
        printf("Dia %d\n",k+1);
        printf("%d\n\n",melhor_do_dia);
}
return 0;
}