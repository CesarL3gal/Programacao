#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
        if (a != b && a != c && b == c){
            printf("A\n");
        }
        else if (a != b && a == c && b!=c){
            printf("B\n");
        }
        else if (a == b && a != c){
            printf ("C\n");
        }
        else{
            printf ("empate\n");
        }



    return 0;
}