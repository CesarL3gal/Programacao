#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int temp;
        scanf("%d",&temp);
        if(temp%3==0){
            printf("Second\n");
        }
        else{
            printf("First\n");
        }
    }
    return 0;
}