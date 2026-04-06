#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i =1; i<n+1 ;i++){
        for(int j = 1; j<i+1 ;j++){
            printf("%02d ", j);
        }
        printf("\n");
    }
    for(int i =1; i<n+1 ;i++){
        for(int j = 1; j<i+1 ;j++){
            printf("%02d ", i);
        }
        printf("\n");
    }
    return 0;
}