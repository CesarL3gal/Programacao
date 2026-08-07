#include <stdio.h>
#include <string.h>
void mover_x(){
    char c = getchar();
    if(c==EOF || c=='\n'){
        return;
    }
    if(c=='x'){
        mover_x();
        putchar('x');
    }
    else{
        putchar(c);
        mover_x();
    }
}
int main(){
    mover_x();
    printf("\n");
    return 0;
}