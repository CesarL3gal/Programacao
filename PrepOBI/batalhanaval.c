#include <stdio.h>
void atirar(int mat[10][10], int linha, int coluna){
    if(mat[linha][coluna]<=0){
        mat[linha][coluna]=-2;
    }
    else{
        mat[linha][coluna]=mat[linha][coluna]*10;
    }
}
int calculaPontuacao(int mat[10][10], int linha, int coluna){
    int val = mat[linha][coluna];
    if(val <= 0 || val==50){
        return 0;
    }
    int tipo=val/10;
    if(tipo==1){
        mat[linha][coluna]=50;
        return 2;
    }
    
    return 0;
}