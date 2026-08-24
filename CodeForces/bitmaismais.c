#include <stdio.h>
int main(){
    int x=0;
    int n;
    scanf("%d",&n);
    getchar();
    char a,b,c;
    for(int i=0;i<n;i++){
        a=getchar();
        b=getchar();
        c=getchar();
        getchar();
        if(a=='X'){
            if(b=='+' && c =='+'){
                x++;
            }
            else if(b=='-' && c =='-'){
                x--;
            }
        }
        else if(a=='+'){
            if(b=='+' && c =='X'){
                x++;
            }
        }
        else if(a=='-'){
            if(b=='-' && c =='X'){
                x--;
            }
        }
    }
    printf("%d\n",x);
    return 0;
}