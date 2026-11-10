#include <stdio.h>
void trocar(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void extremos(int v[], int n, int *menor, int *maior){
    for(int i = 0; i<n ;i++){
        *maior=v[0];
        *menor=v[0];
        if(v[i]>*maior){
            *maior=v[i];
        }
        if(v[i]<*menor){
            *menor=v[i];
        }
    }
}
int main(){
    //teste 1
    int x = 4;
    int y = 9;
    trocar(&x, &y);
    printf("x: %d   y:%d\n",x,y);
    /* esperado: x == 9 e y == 4 */

    //teste 2
    int v[] = {7, 2, 9, 4, 1};
    int menor, maior;
    extremos(v, 5, &menor, &maior);
    printf("Menor: %d   Maior:%d\n",menor,maior);
    /* esperado: menor == 1 e maior == 9 */
    return 0;
}